// C++ code
// infinity loop or (void loop)
void setup()
{
  Serial.begin(9600);
  for(;;){
    Serial.print("hello world.");
  }
}
void loop()
{
  
}