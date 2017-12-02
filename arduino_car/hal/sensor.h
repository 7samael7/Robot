void sensorSensing()
{  
  long duration, distance;
  digitalWrite(triggerPin, LOW); 
  //delayMicroseconds(2); 
  digitalWrite(triggerPin, HIGH);
  //delayMicroseconds(10); 
  digitalWrite(triggerPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  /* 
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  if (distance <= 200 || distance >= 0){
   Serial.println(distance);
  }
  */
}
