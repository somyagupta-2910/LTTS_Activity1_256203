/**
 * @file activity1.h
 * @author Somya Gupta
 * @brief Comprises of all the header files required by activity2.c
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_
#define ACTIVITY1_H_

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief Macro which closes Switch One
 * 
 */
#define SwitchOneOn !(PIND&(1<<PD0))
/**
 * @brief Macro which closes Switch Two
 * 
 */
#define SwitchTwoOn !(PINC&(1<<PC0))

/**
 * @brief Macro which switches ON LED
 * 
 */
#define LedOn PORTB|=(1<<PB0)
/**
 * @brief Macro which switches OFF LED
 * 
 */
#define LedOff PORTB&=~(1<<PB0)

/**
 * @brief The pins connected to the switches and LED are initialized
 * 
 */
void InitLedSwitchPins(void);

#endif