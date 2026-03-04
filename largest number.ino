// C++ code
//largest number
void setup()
{
 Serial.begin(9600);
  int number=findlargestnumber(5,12,-9);
  Serial.println(number);
}

void loop()
{
}
int findlargestnumber(int n1,int n2,int n3){
  if(n1>n2 && n1>n3){
    return n1;
  }
  if(n2>n3 && n2>n1){
    return n2;
  }
  if(n3>n1 && n3>n2){
    return n3;
  }
}