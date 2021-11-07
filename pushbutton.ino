// C++ code
//
bool buttonState=0 ;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  buttonState=digitalRead(2);
  
  if(buttonState==1){
    digitalWrite(13,LOW);}
  else{
    digitalWrite(13,HIGH);}
  delay(30);
}