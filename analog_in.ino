// C++ code
//
int pot=0;
void setup()
{
pinMode(A1,INPUT);
  Serial.begin(9600);
}

void loop()
{
  pot=analogRead(A1);
  Serial.println(pot);
}