/* 
 * File:   mcu.c
  * Author: MrChunckuee
 *
 * Created on 9 de enero de 2017, 02:36 PM
 */

#include "main.h"

void MCU_Init(void){
    DDPCONbits.JTAGEN = LOW; //Disable JTAG port
    ANSELC = 0; //PORTC all digital
    TRISCbits.TRISC2 = 0; //LED_Status is output
    LATCbits.LATC2 = 0; //Clear LED
    TIMER1_Init(); //Config TMR1
    
}

void TIMER1_Init(void){
    //Config TMR1 = 1mS
    INTDisable_Interrupt(); 
    T1CONSET = 0x0000;
    INTCONSET = _INTCON_MVEC_MASK;// Set the MVEC bit
    TMR1 = 0;
    PR1 = 156;
    IEC0bits.T1IE = 1;
    IFS0bits.T1IF = 0;
    IPC1SET = 0x00000004; // Set priority level = 1, subpriority level = 0
    T1CONSET = 0x8030; // Start the timer, prescaller 1:256
    INTEnable_Interrupt(); 
}
