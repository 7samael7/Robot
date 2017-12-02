#include "config.h"
#include "agents/led_diods.h"
#include "agents/servo.h"
#include "agents/ultra_sound_sensor.h"
#include "agents/motor.h"

void setup() 
{
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(rightWheelSpeedPin, OUTPUT);
  pinMode(rightWheelDirectionPin, OUTPUT);
  pinMode(leftWheelSpeedPin, OUTPUT);
  pinMode(leftWheelDirectionPin, OUTPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() 
{
  moveRightWheel(rightWheelDirectionPin, rightWheelSpeedPin, FORWARD);
  delay(250);
}
