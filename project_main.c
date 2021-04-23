/**
 * @file project_main.c
 * @author Somya Gupta
 * @brief This file contains the code to execute the activity one
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "avrheaders.h"
/**
 * @brief Initialize of all the respective pin configurations
 * 
 */
void setup_io_pins(void)
{
    DDRB|=(1<<PB0); 
    DDRD&=~(1<<PD0); 
    PORTD|=(1<<PD0);
    DDRC&=~(1<<PC0);
    PORTC|=(1<<PC0);
}

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main(void)
{
    setup_io_pins();
    while(1)
    {
        if(!(PIND&(1<<PD0)))
        {
            if(!(PINC&(1<<PC0)))
            {
                PORTB|=(1<<PB0);
            }
            else
            {
                PORTB&=~(1<<PB0);
            }
        }
        else
        {
            PORTB&=~(1<<PB0);
        }
    }

    return 0;
}