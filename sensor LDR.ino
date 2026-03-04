// C++ code
//LDR sensor
int light=9;
void setup()
{
  Serial.begin(9600);
  pinMode(light,OUTPUT);
}
void loop()
{
 int resistance=analogRead(A0);
  Serial.println(resistance);
  if(resistance<400){
   digitalWrite(light,HIGH); 
  }
    else{
      digitalWrite(light,LOW);
    }
}
  