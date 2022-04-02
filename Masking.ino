int main(void)
{
  DDRD = 0b10010000 ;
  PORTD = 0b10010000 ;
  while(true){
    
    PORTD = PORTD | 0b10000000;
    _delay_ms(1000);
    PORTD = PORTD & 0b01111111 ;
    _delay_ms(1000);
  }
}
