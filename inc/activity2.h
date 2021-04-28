/**
 * @file activity2.h
 * @author Somya Gupta
 * @brief Comprises of all the header files required by activity2.c
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_

#include <avr/io.h>
#include<util/delay.h>

/**
 * @brief Intializing ADC
 * 
 */
void setup_adc_peripheral(void);

/**
 * @brief This function is used to select the channel  for ADC
 * 
 * @param ch specifies the channel number
 * @return uint16_t specifies that the return type is an unsigned integer
 */
uint16_t ReadADC(uint8_t ch);


#endif