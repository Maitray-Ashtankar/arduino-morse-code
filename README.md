# Arduino Morse Code Transmitter

Spells out text in morse code using a buzzer and two LEDs.
Red LED blinks for dots, green LED lights up for dashes.

## Hardware used
- Arduino Uno (clone)
- Buzzer on pin 8
- Red LED on pin 9
- Green LED on pin 10
- Resistors, breadboard, jumper wires

## How it works
Each letter of the alphabet has its own function made up of 
dot() and line() calls. The loop() function spells out the 
message letter by letter with gaps between each one.

## What I learned
- Using tone() and noTone() for buzzer control
- Breaking code into small reusable functions
