#include <Servo.h>

 Servo myServo;

 int joystickDegeri;

 int servoAcisi;

void setup() {
  
 myServo.attach(9);

}

void loop() {

  joystickDegeri = analogRead(A0);

  servoAcisi = map(joystickDegeri, 0, 1023, 0, 180);

  myServo.write(servoAcisi);

  delay(15);

}
