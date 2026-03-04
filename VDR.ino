// C++ code
//VDR
void setup()
{
  Serial.begin(9600);
}
void loop()
{
 int resistance=analogRead(A0);
  Serial.println(resistance);
}
  