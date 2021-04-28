#include "activity1.h"

void setup_io_pins(void)
{
    DDRB|=(1<<PB0); 
    DDRD&=~(1<<PD0); 
    PORTD|=(1<<PD0);
    DDRC&=~(1<<PC0);
    PORTC|=(1<<PC0);
}