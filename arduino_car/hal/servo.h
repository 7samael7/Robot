#include <Servo.h>
 //90 = 82
Servo myservo;  
int servoPositionInitial = 90;
int servoPositionFirst = 180;
int servoPositionSecond = 135;
int servoPositionThird = 0;
int servoPositionFourth = 45;    


void servo__Turn(int positionValue) {
  if(positionValue == SERVO_POSITION_STRAIGHT)
   {
     myservo.write(servoPositionInitial);
   }
  
  else if(positionValue == SERVO_POSITION_RIGHT)
   {
     myservo.write(servoPositionFirst);
   }

  else if(positionValue == SERVO_POSITION_ALMOST_RIGHT)
   {
     myservo.write(servoPositionSecond);
   }

  else if(positionValue == SERVO_POSITION_LEFT)
   {
     myservo.write(servoPositionThird);
   }

  else if(positionValue == SERVO_POSITION_ALMOST_LEFT)
   {
     myservo.write(servoPositionFourth);
   }
}
