# Arduino Joystick Controlled Servo

This project controls the position of a servo motor using a joystick and an Arduino Uno.

The joystick provides an analog input value between 0 and 1023. Arduino reads this value and converts it into a servo angle between 0 and 180 degrees. As the joystick is moved, the servo motor changes its position accordingly.

## Components

- Arduino Uno
- Joystick module
- Servo motor
- Breadboard
- Jumper wires

## How It Works

1. The Arduino reads the joystick position through analog pin A0.
2. The joystick provides an analog value between 0 and 1023.
3. The 'map( )' function converts this value to an angle between 0 and 180 degrees.
4. The calculated angle is sent to the servo motor using 'myServo.write( )'.
5. The servo changes its position according to the movement af the joystick.

## Concepts Used

- Analog input
- 'analogRead( )'
- 'map( )'
- Servo motor control
- Arduino Servo library
- Value mapping
- Input-output control

## Hardware Setup

The circuit was built using an Arduino Uno, a joystick module and a servo motor.

## Demo
The video below shows the servo motor responding to the movement of the joystick.




https://github.com/user-attachments/assets/bce61bb8-1e3f-40ef-a1e3-52a789e316e4




## What I Learned
 
Through this project, I practiced reading analog input values and using them to control a servo motor. I also learned how to use 'map( )' to convert one range of values into another range.








