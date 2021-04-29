/**
 * @file activity3.h
 * @author Somya Gupta
 * @brief Comprises of all the header files required by activity3.c
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_
#define ACTIVITY3_H_

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief PWM initialization
 * 
 */
void InitPwm(void);

void OutPWM (uint16_t temp_val);

#endif