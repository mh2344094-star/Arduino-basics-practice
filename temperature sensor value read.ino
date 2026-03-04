// C++ code
//temp sensor value read
int temp_pin(A0);
void setup()
{
 Serial.begin(9600); 
}
void loop()
{
int temp=analogRead(temp_pin);
  Serial.println(temp);
}
