// C++ code
//if-else statement
//leap year
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  int year=2024;
  if(year%4==0 && year%100!=0 ||year%400){
    Serial.print(year);
    Serial.print("is leap year");
  }
  else{
    Serial.print(year);Serial.print("is not a leap year.");
   }
  Serial.println("");
}
    
  