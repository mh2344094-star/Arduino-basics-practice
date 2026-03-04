// C++ code
//LED ON-OFF according to moisture value read
int sensor=A0;
int red=7,blue=6,green=5;
void setup()
{
Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop()
{
int moisture=analogRead(sensor); 
 Serial.println(moisture);
  //Red();
  //Green();
  //Yellow();
  if(moisture>=0 && moisture<=300){
  Red();
  }
    if(moisture>300 && moisture<=600){
  Green();
  } 
  if(moisture>600){
  Yellow();
  }
}
void Red(){
 digitalWrite(red,HIGH);
 digitalWrite(blue,LOW);
 digitalWrite(green,LOW);
}
void Green(){
 digitalWrite(red,LOW);
 digitalWrite(blue,LOW);
 digitalWrite(green,HIGH);
}
void Yellow(){
 digitalWrite(red,HIGH);
 digitalWrite(blue,LOW);
 digitalWrite(green,HIGH);
}

