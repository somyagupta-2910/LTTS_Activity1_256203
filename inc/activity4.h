#ifndef ACTIVITY4_H_
#define ACTIVITY4_H_

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief Initializes UART commuincation
 * 
 */
void USARTInit(uint16_t );

/**
 * @brief Prints the tempeature value on the Serial Monitor
 * 
 */
void USARTWriteChar(char );

#endif