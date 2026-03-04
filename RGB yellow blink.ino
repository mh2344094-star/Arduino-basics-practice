// C++ code
//RGB LED yellow Blinking
int red=13,blue=12,green=11;
void setup()
{
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT); 
pinMode(green,OUTPUT); 
}
void loop()
{
 yellowblink(); 
}
void yellowblink(){
digitalWrite(red,HIGH);
digitalWrite(green,HIGH);
delay(1000);
digitalWrite(red,LOW);
digitalWrite(green,LOW);
delay(1000);
}