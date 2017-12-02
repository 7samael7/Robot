
void moveRightWheel( int rightWheelDirectionPin, int rightWheelSpeedPin, int direction )
{
  if( direction)
  {
     analogWrite( rightWheelSpeedPin, 100 );
     digitalWrite( rightWheelDirectionPin, HIGH );
  }
  else
  { 

  }
}


void moveLeftWheel( int leftWheelDirectionPin, int leftWheelSpeedPin, int direction )
{
  if( direction)
  {
     analogWrite( leftWheelSpeedPin, 100 );
     digitalWrite( leftWheelDirectionPin, HIGH );
  }
  else
  { 

  }
}


void stop() 
{

}

