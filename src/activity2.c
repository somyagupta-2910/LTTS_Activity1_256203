/**
 * @file activity2.c
 * @author Somya Gupta
 * @brief The ADC values of potentiometer are read
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity2.h"

void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(!(ADCSRA & (1<<ADIF)));

    ADCSRA|=(1<<ADIF);
    return(ADC);
}

