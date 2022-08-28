#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

void setup() {
  lcd.begin(16,2);
  
}
void loop() {
  
 
  lcd.setCursor(0,0);
  lcd.print("HELLO!");
  
}
