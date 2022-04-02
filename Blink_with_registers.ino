int main(void)
{
  DDRD = 0b1000000 ;
  while(true){
    PORTD = 0b1000000 ;
    _delay_ms(1000);
    PORTD = 0b0000000 ;
    _delay_ms(1000);
  }
}
