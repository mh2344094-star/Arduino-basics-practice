// C++ code
//for loop,,number divisible by 7
void setup()
{
  Serial.begin(9600);
  for (int i=1;i<=500;i++){
    if(i%7==0){
    Serial.println(i);
  }
       }
 
}

void loop()
{
  
}