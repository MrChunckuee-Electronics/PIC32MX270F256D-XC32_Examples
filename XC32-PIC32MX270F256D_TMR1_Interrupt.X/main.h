/* 
 * File:   main.h
 * Author: MrChunckuee
 *
 * Created on 17 de enero de 2017, 10:17 AM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

//Include all libraries that use in project
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <sys/attribs.h> //Atributos para las interrupciones
#include "mcu.h"
#include "interrupt.h"
    

#define SYS_FREQ    (40000000L) //Frecuencia del sistema
    
#define LED_STATUS      LATAbits.LATA9 //LED indicador en harware
    
#define INVERTER_ENB   LATBbits.LATB15
#define INVERTER_ENA   LATAbits.LATA0
    
#define BOOST_PWM       LATBbits.LATB1
#define BOOST_FEEDBACK  LATBbits.LATB3
    
#define RELE_CTRL       LATCbits.LATC9 //Pin del relevador
    
#define OUTPUT  0
#define INPUT   1
#define CLEAR   0
#define HIGH    1
#define LOW     0

#ifdef	__cplusplus
}
#endif

#endif	/* HW_SW_CONFIG_H */

