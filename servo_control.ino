#include <Servo.h>

// Create a Servo object
Servo servo1;

// Function to initialize the servo motor
void setupServo() {
    servo1.attach(7); // Connect the servo motor to pin 7
    servo1.write(90); // Default position of the servo
    Serial.println("Servo Initialized");
}

// Function to control the servo motor based on soil moisture value
void controlServo(int fsoil, int maxDryValue) {
    if (fsoil > maxDryValue) { // If the soil is dry
        Serial.println("==> Dry Waste");
        servo1.write(170); // Move servo to the dry waste position
    } else { // If the soil is wet
        Serial.println("==> Wet Waste");
        servo1.write(10); // Move servo to the wet waste position
    }
    delay(3000); // Wait for 3 seconds
    servo1.write(90); // Return to the default position
}

