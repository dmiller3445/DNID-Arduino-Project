#include <Servo.h>

Servo myServo;
Servo myServo2;

void setup() {
  myServo2.attach(5);
  myServo2.write(65);
  delay(300); // Puts the mayor in the initial position
  myServo.attach(2);
}

void loop() { 
  myServo.write(80);
  delay(2300); // Starts the pulley movement
  myServo.write(90);
  delay(1000); // Stops pulley movement mid-way, at this point the weapon has been removed and the pause allows it to settle behind the pulley support
  myServo.write(80);
  delay(2800); // Starts pulley movement, sends the character attached to the pulley to the end
  myServo2.write(20);  // Rotates mayor into view
  myServo.write(90); // Stops pulley, gives pause long enough to reset the scene and disconnect from the power
  delay(50000);
}