// C++ code
//motor rotation
int p=10,n=11;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  analogWrite(p,255);//255 is maximum rpm.(255=5v)
  analogWrite(n,0); //   0 is minimum rpm.
}