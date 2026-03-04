// C++ code
//if-else statement
//largest number among three numbers
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  int n1,n2,n3;
    n1=10;
    n2=8;n3=15;
  if(n1>n2 &&n1>n3){
    Serial.print(n1);
    Serial.print("is largest.");
  }
    if(n2>n1 &&n2>n3){
      Serial.print(n2);
      Serial.print("is largest.");
    }
  if(n3>n1&&n3>n2){
    Serial.print(n3);
    Serial.print("is largest.");
  }
  Serial.println("");
 
 }
  