/* 
 * File:   interrupt.c
 * Author: MrChunckuee
 *
 * Created on 17 de enero de 2017, 10:21 AM
 */

#include "main.h"

uint16_t count=0;  

void __ISR (_TIMER_1_VECTOR, IPL1AUTO) ISR_Timer1 (void){
    count++;
    if(count>=1000){
        count = 0;
        LED_STATUS ^= 1;
    }
    IFS0CLR = _IFS0_T1IF_MASK;// Clear the timer interrupt status flag
}
