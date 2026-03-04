// C++ code
//if-else statement
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
    char data=Serial.read();
  if(data=='r'){
    Serial.println("today is a rainy day.");
  }
  else{
    Serial.println("today is a sunny day.");
  }
  delay(1000);
  }
}
  