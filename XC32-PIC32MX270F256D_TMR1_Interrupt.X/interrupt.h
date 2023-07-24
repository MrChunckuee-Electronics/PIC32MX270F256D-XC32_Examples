/* 
 * File:   interrupt.h
 * Author: MrChunckuee
 *
 * Created on 17 de enero de 2017, 10:21 AM
 */

#ifndef INTERRUPT_H
#define	INTERRUPT_H

#ifdef	__cplusplus
extern "C" {
#endif

#define INTDisable_Interrupt()  asm volatile("di")     // Disable all interrupts
#define INTEnable_Interrupt()   asm volatile ("ei")    // Enable all interrupts   

#ifdef	__cplusplus
}
#endif

#endif	/* INTERRUPT_H */

