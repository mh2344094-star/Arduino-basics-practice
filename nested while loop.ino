// C++ code
// nested while loop
void setup()
{
  Serial.begin(9600);
  while(1){
    if (Serial.read()=='s'){
 while (1){
 Serial.println("hello!");
   if(Serial.read()=='b'){
     break;
 }
 }
  Serial.println("loop broken");
}
}
}
void loop()
{
  
}