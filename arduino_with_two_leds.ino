// C++ code
//
void setup()
{
   pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);//تحديد البين رقم 13 ك خرج
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(13, LOW);//إعطاء قيمة 1 منطقي(5فولط) للبين رقم 13
  
  delay(500); //انتظر 1000 ميلي ثانية
  digitalWrite(9, LOW);
  digitalWrite(13, HIGH);//إعطاء قيمة 0 منطقي(0فولط) للبين رقم 13
  delay(500); //انتظر 1000 ميلي ثانية
}