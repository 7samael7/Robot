#include "config.h"

#include "hal/motor.h"
#include "hal/servo.h"

void setup() 
{
  Serial.begin( 9600 );
  
  pinMode( triggerPin, OUTPUT );
  pinMode( echoPin, INPUT );
  
  pinMode( redLEDDiodPin, OUTPUT );
  pinMode( greenLEDDionPin, OUTPUT );
  
  pinMode( rightWheelSpeedPin, OUTPUT );
  pinMode( rightWheelDirectionPin, OUTPUT );
  pinMode( leftWheelSpeedPin, OUTPUT );
  pinMode( leftWheelDirectionPin, OUTPUT );
  
  myservo.attach(servoPin);
}

void loop() 
{
  /*
  servo__Turn(SERVO_POSITION_STRAIGHT);
  delay(400);
  servo__Turn(SERVO_POSITION_RIGHT);
  delay(400);
  servo__Turn(SERVO_POSITION_ALMOST_RIGHT);
  delay(400);
  servo__Turn(SERVO_POSITION_LEFT);
  delay(400);
  servo__Turn(SERVO_POSITION_ALMOST_LEFT);
  delay(400);
  */
}

