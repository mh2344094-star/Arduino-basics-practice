// C++ code
//RGB LED  pink Blinking
int red=13,blue=12,green=11;
void setup()
{
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT); 
pinMode(green,OUTPUT); 
}
void loop()
{
pinkblink(); 
}
void pinkblink(){
digitalWrite(red,HIGH);
digitalWrite(blue,HIGH);
delay(1000);
digitalWrite(red,LOW);
digitalWrite(blue,LOW);
delay(1000);
}