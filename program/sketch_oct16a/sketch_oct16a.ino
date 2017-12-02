/*
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

#define trigPin 13
#define echoPin 12
#define led 11
#define led2 10
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}
 
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
   
  if (distance < 4) {  // This is where the LED On/Off happens
    digitalWrite(led,HIGH); // When the Red condition is met, the Green LED should turn off
    digitalWrite(led2,LOW);
  }
  else {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
  }
   
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
   
  delay(500);
}
*/

#define INTERVAL_SENSOR 1000    // interval at which to read sensor (milliseconds)
#define INTERVAL_MOTOR 500      // interval at which to update motor state (milliseconds)
#define trigPin 13
#define echoPin 12
#define led 11
#define led2 10
#include <Servo.h>
#define DIR_LEFT 1
#define DIR_RIGHT 2
int M1_Left = 14; 
int M1_Right = 15; 
  
unsigned long millisSensor = 0; // will store last time sensor date were read
unsigned long millisMotor = 0;  // will store last time motor state was updated
  
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(M1_Left, OUTPUT);
  pinMode(M1_Right, OUTPUT);  
}
  
void loop() {
  // define a variable to store current time
  unsigned long millisCurrent = 0;
  
  // Should processReadSensor() be triggered?
  millisCurrent = millis();
  if (millisCurrent - millisSensor >= INTERVAL_SENSOR) {
    millisSensor = millisCurrent;
    processReadSensor();
  }
  
  // Should processUpdateMotor() be triggered?
  millisCurrent = millis();
  if (millisCurrent - millisMotor >= INTERVAL_MOTOR) {
    millisMotor = millisCurrent;
    processUpdateMotor();
  }
}
  
void processReadSensor() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
} 
  
void processUpdateMotor() {
  turn (DIR_LEFT); 
  delay(1000); // 1 s 
   
  stop();
  delay(250); // 250ms
 
  turn(DIR_RIGHT); 
  delay(1000); // 1 s
   
  stop();
  delay(250); // 250ms 
}
void turn(int direction) {
  boolean inPin1 = LOW;
  boolean inPin2 = HIGH;
 
  if(direction== DIR_LEFT) {
    inPin1 = HIGH;
    inPin2 = LOW;
  }
 
  digitalWrite(M1_Left, inPin1);
  digitalWrite(M1_Right , inPin2);
}
 
void stop() {
  digitalWrite(M1_Left, LOW);
  digitalWrite(M1_Right , LOW);
}
