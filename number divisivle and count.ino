// C++ code
//for loop,,number divisible by 7 alternative
void setup()
{
  Serial.begin(9600);
  int i;int target=500;
  int count=0;
  for (int i=1;i<=target;i++){
    if(i%7==0){
    Serial.println(i);count++;
  }
       }
  Serial.print("Total number divisible by 7 are:");
    Serial.print(count);
 
}

void loop()
{
  
}