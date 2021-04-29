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
#include <util/delay.h>

/**
 * @brief ADC Initization
 * 
 */
void InitADC();

/**
 * @brief The channel is selected for ADC readings
 * 
 * @param ch The channel to be selected is given as input to this variable
 * @return uint16_t The return type is an usigned 16 bit
 */
uint16_t ReadADC(uint8_t ch);


#endif