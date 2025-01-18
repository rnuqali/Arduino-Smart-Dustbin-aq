# Smart-Waste-Sorting-System
The Smart Waste Sorting System is an automated waste management solution designed to classify and sort waste as wet or dry using sensors and a servo motor. This system aims to improve hygiene through touch-free operation, ensure accurate classification, and streamline the waste disposal process. It is scalable, efficient, and easy to use, making it suitable for homes, offices, and public spaces.

## Features
1. *Automatic Dustbin Opening*: Detects waste and opens the bin automatically for touch-free disposal.
2. *Waste Classification*: Classifies waste into wet or dry using a soil moisture sensor.
3. *Sorting Mechanism*: Moves waste to the correct compartment using a servo motor.
4. *False Trigger Prevention*: Ignores invalid triggers such as shadows or distant movements.
5. *Monitoring System*: Allows admins to monitor sensor and motor status for efficient maintenance.

## Requirements

### Hardware
- *Microcontroller*: Arduino Uno, Mega, or equivalent.
- *Ultrasonic Sensor*: HC-SR04 for object detection.
- *Soil Moisture Sensor*: Analog sensor (range: 0–1023) for waste classification.
- *Servo Motor*: SG90 or MG995 with a minimum torque of 2.5 kg/cm.
- *Power Supply*: 5V DC (for sensors and servo motor).
- *Connecting Wires*: Male-to-male and male-to-female jumper wires.
- *Breadboard*: Standard size for circuit connections.
- *Resistors*: As required (e.g., pull-up/pull-down resistors).
- *Enclosure/Bin*: A bin with two compartments (wet and dry).

### Software
- *Arduino IDE*: For writing and uploading the code to the microcontroller.

## How to Use
1. *Setup the System*:
   - Assemble the hardware components as per the circuit design.
   - Load the Arduino sketch into the Arduino IDE.
   - Connect the microcontroller to your computer via USB.
   - Upload the code to the microcontroller.
2. *Operate the System*:
   - Place waste within 15 cm of the ultrasonic sensor.
   - The system will detect the object and classify it as wet or dry based on moisture levels.
   - The servo motor will direct the waste into the correct compartment.
3. *Monitor System Status*:
   - Use the Arduino IDE’s serial monitor to check the status of sensors and the servo motor.
   - Resolve any issues indicated by error messages.

## System Design

The system is designed with the following modules:
1. *Detection Module*:
   - The ultrasonic sensor detects objects within a 15 cm range.
2. *Classification Module*:
   - The soil moisture sensor measures the moisture level to classify waste as wet or dry.
3. *Sorting Module*:
   - The servo motor moves the waste into the corresponding compartment.
4. *Monitoring Module*:
   - Logs sensor and motor statuses for troubleshooting and maintenance.
