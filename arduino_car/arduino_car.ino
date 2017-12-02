#include "config.h"

#include "hal/motor.h"
#include "hal/servo.h"
#include "hal/sensor.h"
#include "hal/led.h"

void setup() 
{
  Serial.begin( 9600 );
  
  pinMode( triggerPin, OUTPUT );
  pinMode( echoPin, INPUT );
  
  pinMode( redLEDDiodPin, OUTPUT );
  pinMode( greenLEDDiodPin, OUTPUT );
  
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
  sensorSensing();
  delay(400);
  servo__Turn(SERVO_POSITION_RIGHT);
  sensorSensing();
  delay(400);
  servo__Turn(SERVO_POSITION_ALMOST_RIGHT);
  sensorSensing();
  delay(400);
  servo__Turn(SERVO_POSITION_LEFT);
  sensorSensing();
  delay(400);
  servo__Turn(SERVO_POSITION_ALMOST_LEFT);
  sensorSensing();
  delay(400);
  */
  greenLed();
  delay(500);
  redLed();
  delay(500);
}

