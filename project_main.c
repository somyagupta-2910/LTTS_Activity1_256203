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
#include "activity1.h"
#include "activity2.h"

#define SwitchOneOn !(PIND&(1<<PD0))
#define SwitchTwoOn !(PINC&(1<<PC0))

#define LedOn PORTB|=(1<<PB0)
#define LedOff PORTB&=~(1<<PB0)

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main(void)
{
    setup_io_pins();
    setup_adc_peripheral();
    while(1)
    {
        uint16_t temp;
        while(1)
        {
            if(SwitchOneOn && SwitchTwoOn)
            {
                LedOn;
                temp=ReadADC(1);
            }
            else
            {
                LedOff;
            }
        }
    }

    return 0;
}