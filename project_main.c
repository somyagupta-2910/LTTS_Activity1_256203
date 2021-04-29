/**
 * @file project_main.c
 * @author Somya Gupta
 * @brief This file contains the code to execute the entire car seat heater project
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief Initializes all the required peripherals
 * 
 */
void peripheral_init(void)
{
    /*Calls the function which initializes all the required LED and switch pins*/
    InitLedSwitchPins();
    /*Calls the function which initializes the ADC pins and registers*/
    InitADC();
    /*Calls the function which initializes the PWM pins and registers*/
    InitPwm();
    /*Calls the function which initializes the UART pins and registers*/
    USARTInit(103);
}

/**
 * @brief An unsigned 16 bit variable which stores the ADC value coming from the potentiometer
 * 
 */
uint16_t temp; 
/**
 * @brief Gets the temperature value to be printed in the Serial Monitor
 * 
 */
char temperature_output;

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main(void)
{
    /**
     * @brief Calls the fuction which initialzes all the peripherals
     * 
     */
    peripheral_init();
    while(1)
    {
        if(SwitchOneOn && SwitchTwoOn)
        {
            LedOn;
            temp=ReadADC(1);
            temperature_output=OutPWM(temp);
            USARTWriteChar(temperature_output);
        }
        else
        {
            LedOff;
            OCR1A = 0;
        }
    }

    return 0;
}