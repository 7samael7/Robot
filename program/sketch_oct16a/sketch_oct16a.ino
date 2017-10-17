#include <Servo.h>
 
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
 
int servoPosition = 82; //82 = angle 90
int angleDegree90 = 82;


 
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(servoPosition);
}

void turnRight() 
{
  for (int i = angleDegree90; i <= 180; i += 1)
  {
    myservo.write(i);
    delay(15);   
  }
  
  for (int i = 180; i >= angleDegree90; i -= 1)
  {
    myservo.write(i);
    delay(15);   
  } 
}

void turnLeft() 
{
  for (int i = angleDegree90; i >= 0; i -= 1)
  {
    myservo.write(i);
    delay(15);   
  }
  
  for (int i = 0; i <= angleDegree90; i += 1)
  {
    myservo.write(i);
    delay(15);   
  } 
}
 
void loop() {
  turnRight();
  turnLeft();
}



