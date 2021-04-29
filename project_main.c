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


void peripheral_init(void)
{
    InitLedSwitchPins();
    InitADC();
    InitPwm();
}

uint16_t temp;

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main(void)
{
    peripheral_init();
    while(1)
    {
        if(SwitchOneOn && SwitchTwoOn)
        {
            LedOn;
            temp=ReadADC(1);
            OutPWM(temp);
        }
        else
        {
            LedOff;
            OCR1A = 0;
        }
    }

    return 0;
}