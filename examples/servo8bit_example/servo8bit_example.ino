#include "Servo8Bit.h"

// Pins definieren
const byte LED = 3;
const byte ServoPin1 = 4;
const byte ServoPin2 = 0;

// Servos definieren
Servo8Bit servo1;
Servo8Bit servo2;

void setup() {

  // Servos initialisieren
  servo1.attach(ServoPin1,544,2400);  //attach the servo to pin PB1      
  servo2.attach(ServoPin2);
}

byte servoValue;

void loop() {
  
  // Die ersten 2 Sekunden gehen die Servos auf 0 Grad
  // Die danach 2 Skunden auf 90 Grad
  // die letzen 2 Sekunden auf 180 Grad
  if ((millis() % 6000) > 4000) {
    digitalWrite(LED, 1);
    servoValue = 180;
  } 
  else if ((millis() % 6000) > 2000) {
    servoValue = 90;
  } 
  else {
    digitalWrite(LED, 0);
    servoValue = 0;
  }

  if (servo1.read() != servoValue) {
    servo1.write(servoValue);
  }

  if (servo2.read() != servoValue) {
    servo2.write(servoValue);
  }
  
}