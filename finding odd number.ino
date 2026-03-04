// C++ code
//for loop,, finding odd number
void setup()
{
  Serial.begin(9600);
  for (int i=1;i<=500;i++){
    if(i%2!=0){
    Serial.println(i);
  }
       }
 
}

void loop()
{
  
}