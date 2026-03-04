// C++ code
//class
//type coasting
void setup()
{
 Serial.begin(9600);
  String in="5",out="15";
  String sum=in+out;
  Serial.println(sum);
  
  String num1="5",num2="15";
  int intnum1=num1.toInt();
  int intnum2=num2.toInt();
  Serial.println(intnum1+intnum2);
 
}
  
void loop()
{
}
