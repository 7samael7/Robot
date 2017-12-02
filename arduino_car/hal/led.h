void greenLed()
{
  digitalWrite(redLEDDiodPin, LOW);
  digitalWrite(greenLEDDiodPin, HIGH);
}

void redLed()
{
  digitalWrite(greenLEDDiodPin, LOW);
  digitalWrite(redLEDDiodPin, HIGH);
}
