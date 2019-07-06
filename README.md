# Arduino-RTOS
Real time operating system makes easier to perform multitasking.

## Introduction
In this project i will demonstrate how an rtos can perform better in multitasking in comparision with traditional programming approach for 
arduino uno. In this project we are going to combine the two task and doing both with the RTOS and without RTOS.

## Prerequisite
  - Arduino UNO x 1
  - LED x 1 (I'm using on board led on pin 13)
  - Connecting wires x 6
  - Variable resistor/ pot(I'm using here bunch of resistor as a pot)
 
## Libraries
  - Arduino_FreeRTOS.h(You can download it from the Arduino IDE from manage library section in tools or Ctrl+Shift+I).

## Task
In this project i'm going to combine the blinking of led and the analog read task. We can combine more task as we want.

## Connection
According to above tutorial we didn't need any complex connection. For led blink we are using on board led of arduino that is on pin 13 and for analog serial read we are using a variable resistor having 3 pins we use middle pin as data pin so putting it into the A0 pin and both end pin to source that is one to 5V and one to Ground.
