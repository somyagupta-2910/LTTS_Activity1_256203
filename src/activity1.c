/**
 * @file activity1.c
 * @author Somya Gupta
 * @brief LED is turned On or Off based on whether both the switches are Pressed or not
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"

void InitLedSwitchPins(void)
{
    DDRB|=(1<<PB0); 
    DDRD&=~(1<<PD0); 
    PORTD|=(1<<PD0);
    DDRC&=~(1<<PC0);
    PORTC|=(1<<PC0);
}