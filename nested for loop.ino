// C++ code
//nested for loop
void setup()
{
  Serial.begin(9600);
 
  for (int i=1;i<5;i++){
    for(int j=1;j<3;j++){
    Serial.print(" hello world");
  }
    Serial.println("");
       }
  
}

void loop()
{
  
}