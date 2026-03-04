// C++ code
//array size/element number
void setup()
{
 Serial.begin(9600);
  char carray[]={'a','b','c','d','e'};
  float farray[]={3.14,9.8,4.3,5.6,2.8};
   Serial.println(sizeof(carray)/sizeof(carray[0]));
   Serial.println(sizeof(farray)/sizeof(farray[0]));
}
void loop()
{
 
}