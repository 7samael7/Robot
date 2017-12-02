#define FORWARD 1
#define BACKWARD 0


void motor__moveWheels( int direction, int speed, int directionPinForLeftWheel, int directionPinForRightWheel, int speedPinForLeftWheel, int speedPinForRighttWheel )
{
   if( direction == FORWARD )
  {
    // Move left wheel
      digitalWrite( directionPinForLeftWheel, LOW );
      analogWrite( speedPinForLeftWheel, speed );

    // Move right wheel
      digitalWrite( directionPinForRightWheel, HIGH );
      analogWrite( speedPinForRighttWheel, speed + 40 );
  }
  else
  {
    // Move left wheel
      digitalWrite( directionPinForLeftWheel, HIGH );
      analogWrite( speedPinForLeftWheel, speed );

    // Move right wheel
      digitalWrite( directionPinForRightWheel, LOW );
      analogWrite( speedPinForRighttWheel, speed + 40 );
  }

}

