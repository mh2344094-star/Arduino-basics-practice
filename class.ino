// C++ code
//class
class calculation{
  int a,b,c;
  public:
  void set(int n1,int n2,int n3){
   a=n1;b=n2;c=n3;
  }
  void sum(){
    Serial.print("sum:");
    Serial.print(a+b+c);
    Serial.println("");
  }
  void multiply(){
    Serial.print("multipication:");
    Serial.print(a*b*c);
    Serial.println("");
  }
  void largestnumber(){
    if(a>b && a>c){
      Serial.print(a);Serial.print("is largest.");
    }
    if(b>a && b>c){
      Serial.print(b);Serial.print("is largest.");
    }
    if(c>a && c>b){
      Serial.print(c);Serial.print("is largest.");
    }  
  }
};
void setup()
{
 Serial.begin(9600);
  calculation a;
  a.set(10,20,30);
  a.sum();
  a.multiply();
  a.largestnumber();
  
}

void loop()
{
}
