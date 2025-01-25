const int trigPin = 8; 
const int echoPin = 9; 
long duration;
int distance = 0;
int Ultra_Distance = 15; 

const int potPin = A0; 
int soil = 0;
int fsoil;

void setupSensors() {
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
    Serial.println("Sensors Initialized");
}

int readUltrasonicDistance() {
    distance = 0;
    for (int i = 0; i < 2; i++) {
        digitalWrite(trigPin, LOW);
        delayMicroseconds(7);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        duration = pulseIn(echoPin, HIGH);
        distance += duration * 0.034 / 2; 
        delay(10);
    }
    distance /= 2; 
    return distance;
}