// C++ code
//
String My="";
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    My=Serial.readString();}
  if(My=="on")
    digitalWrite(13,HIGH);
  else if (My=="off")
    digitalWrite(13,LOW);
  Serial.println(My);
  
}