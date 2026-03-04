// C++ code
//sensor value read
int flex_sensor(A0);
void setup()
{
 Serial.begin(9600); 
}
void loop()
{
 int angle_value=analogRead(A0);
  Serial.println(angle_value);
}