#include <Servo.h>

Servo servo1;

const int trigPin = 8;
const int echoPin = 9;

long duration;

int distance=0;
int potPin = A0;            
int soil=0;
int fsoil;
int maxDryValue=10;       //this value decides how much humidity require to treat waste as wet object
int Ultra_Distance=15;   //set Distance between Ultrasonic and moisture(soil) sensor in cm

void setup() 
{
Serial.begin(9600);
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
servo1.attach(7);
Serial.println("Soil Sensor Ultrasonic Servo");
}

void loop() 
{
  int soil=0;
  for(int i=0;i<2;i++)
  {
digitalWrite(trigPin, LOW);
delayMicroseconds(7);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2+distance;
delay(10);

  }
  distance=distance/2;
 
if (distance <Ultra_Distance && distance>1)
{
  delay(1000);
for(int i=0;i<3;i++)
{
soil = analogRead(potPin) ;
soil = constrain(soil, 485, 1023);
fsoil = (map(soil, 485, 1023, 100, 0))+fsoil;
delay(75);
}
fsoil=fsoil/3;

Serial.print("Humidity: ");
Serial.print(fsoil);
Serial.print("%"); Serial.print("    Distance: ");Serial.print(distance);Serial.print(" cm");
if(fsoil>maxDryValue)
{delay(1000);
  Serial.println("     ==>Dry Waste ");
  servo1.write(170); // Position for Dry Waste
delay(3000);} 
else{ delay(1000);
  Serial.println("     ==>WET Waste ");
servo1.write(10); // Position for WET Waste
delay(3000);}

servo1.write(90);}
distance=0;
fsoil=0;delay(1000);
}
