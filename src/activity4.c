/**
 * @file activity4.c
 * @author Somya Gupta
 * @brief Prints the temperature value on the Serial Monitor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity4.h"

void USARTInit(uint16_t ubrr_value)
{
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C=(1<<UMSEL00)|(UCSZ01)|(UCSZ00);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

void USARTWriteChar(char data)
{
    while(!(UCSR0A&(1<<UDRE0)))
    {
        
    }

    UDR0 = data;
}