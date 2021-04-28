#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_

#include <avr/io.h>
#include<util/delay.h>


void setup_adc_peripheral(void);
uint16_t ReadADC(uint8_t ch);


#endif