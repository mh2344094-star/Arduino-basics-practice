// C++ code
//motor on-off
int p=13,n=12;
void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  digitalWrite(p,LOW); 
  digitalWrite(n,HIGH); 
}