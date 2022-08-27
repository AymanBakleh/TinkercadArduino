int main(void)
{
  DDRD = 0b10000000 ;
  while(true){
    PORTD = 0b10000000 ;
    _delay_ms(1000);
    PORTD = 0b00000000 ;
    _delay_ms(1000);
  }
}
