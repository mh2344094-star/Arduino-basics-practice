// C++ code
//if-else statement
//positive negative number
void setup()
{
 Serial.begin(9600);
}
void loop()
{
 float n=8.50;
  if(n==0){
    Serial.print(n);
    Serial.print("is zero.");
  }
  if(n>0){
 Serial.print(n);Serial.print("is a positive number.");
}
  else{
    Serial.print(n);
    Serial.print("is a negative number.");
  }
Serial.println("");
}    
    
    
    

  
  

    
  