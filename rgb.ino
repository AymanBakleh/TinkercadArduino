// C++ code
//
int red=11;
int green=10;
int blue=9;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  analogWrite(red,50);
  analogWrite(green,168);
  analogWrite(blue,66);
  delay(1000);
  analogWrite(red,50);
  analogWrite(green,135);
  analogWrite(blue,168);
  delay(1000);
}