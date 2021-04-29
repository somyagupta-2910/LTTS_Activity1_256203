/**
 * @file activity3.c
 * @author Somya Gupta
 * @brief The PWM is generated for the respective ADC values
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity3.h"

void InitPwm(void)
{
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);
}

void OutPWM (uint16_t ADC_value)
{


    if((ADC_value>=0) && (ADC_value<=209)){

        OCR1A = 205; //20% duty cycle

        _delay_ms(20);
    }
    else if((ADC_value>=210) && (ADC_value<=509)){

        OCR1A = 410; //40% duty cycle

        _delay_ms(20);
    }
    else if((ADC_value>=510) && (ADC_value<=709)){

        OCR1A = 717;//70% duty cycle

        _delay_ms(20);
    }
    else if((ADC_value>=710) && (ADC_value<=1024)){

        OCR1A = 973; //95% duty cycle

        _delay_ms(20);
    }
    else{
        OCR1A = 0; //0% output

    }
}
