// C++ code
//while loop,,finding even numbers
void setup()
{
  Serial.begin(9600);
  int i=1;
  int count=0;
    while (i<=200){
      if (i%2==0){
      Serial.println(i);count++;
      }
    i++;
  }
  Serial.print("total even number is:");
  Serial.print(count);
}

void loop()
{
  
}