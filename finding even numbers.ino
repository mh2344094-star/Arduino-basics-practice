// C++ code
//while loop,,finding even numbers
void setup()
{
  Serial.begin(9600);
  int i=1;
    while (i<=200){
      if (i%2==0){
      Serial.println(i);
      }
    i++;
  }
  
}

void loop()
{
  
}