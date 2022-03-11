// C++ code
//
int Red=7;
int Orange=2;
int Green=0;
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(0,OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2,HIGH);
  delay(1000);// Wait for 1000 milliseconds(s)
  digitalWrite(2,LOW);
  delay(1000);// Wait for 1000 milliseconds(s)
  digitalWrite(0,HIGH);
  delay(1000);// Wait for 1000 miliiseconds(s)
  digitalWrite(0,LOW);
  delay(1000);// Wait for 1000 milliseconds(s)
  
}
