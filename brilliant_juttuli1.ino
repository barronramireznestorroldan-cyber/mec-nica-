// C++ code
//
void setup()
{
  pinMode(9,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
  {
  digitalWrite(9,HIGH);
  delay(3000); // Wait for 5000 millisecond(s)
  digitalWrite(9,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5,HIGH);
  delay(3000); // Wait for 5000 millisecond(s)
  digitalWrite(5,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
  
  