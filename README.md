# Smart-Waste-Sorting-Dustbin
The Smart Waste Sorting System is an automated waste management solution designed to classify and sort waste as wet or dry using sensors and a servo motor. This system aims to improve hygiene through touch-free operation, ensure accurate classification, and streamline the waste disposal process. It is scalable, efficient, and easy to use, making it suitable for homes, offices, and public spaces.

## Features
1. *Automatic Dustbin Opening*: Detects waste and opens the bin automatically for touch-free disposal.
2. *Waste Classification*: Classifies waste into wet or dry using a soil moisture sensor.
3. *Sorting Mechanism*: Moves waste to the correct compartment using a servo motor.
4. *False Trigger Prevention*: Ignores invalid triggers such as shadows or distant movements.


## Requirements

### **Hardware**
- **Microcontroller**: Arduino Uno.
- **Ultrasonic Sensor**: HC-SR04 for detecting objects within a predefined range.
- **Soil Moisture Sensor**: Analog soil moisture sensor with a range of 0–1023, used for classifying waste.
- **Servo Motor**: SG90 for directing waste to the correct compartment.
- **Breadboard**: A standard-sized breadboard for assembling the circuit.
- **Connecting Wires**: Male-to-male and male-to-female jumper wires for connections.

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


![Image](https://github.com/user-attachments/assets/e9a84d15-1ec0-4f74-8e6a-81848ff82b97)

![Image](https://github.com/user-attachments/assets/d4b94c1c-b84c-494b-aa76-26753d499f54)
