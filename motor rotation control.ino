// C++ code
//motor rotation control
int p=10,n=11;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  analogWrite(p,120);
  analogWrite(n,0);
  delay(3000);
  analogWrite(p,0);
  analogWrite(n,120);
  delay(3000);
}
  