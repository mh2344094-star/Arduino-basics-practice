// C++ code
//angle value read
int flex_sensor(A0);
void setup()
{
 Serial.begin(9600); 
}
void loop()
{
 int angle_value=angle();
  Serial.println(angle_value);
}
int angle(){
int sensor_value=analogRead(A0);
int angle=map(sensor_value,682,275,0,180);
  return angle;
}