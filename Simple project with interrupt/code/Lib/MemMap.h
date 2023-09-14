/*
 * MemMap.h
 *
 * Created: 8/3/2023 8:47:51 PM
 *  Author: Heba
 */ 


#ifndef MEMMAP_H_
#define MEMMAP_H_

#include "STD_TYPES.h"
/*******************************DIO**********************************/
#define PORTA (*(volatile unsigned char*)0x3B)
#define DDRA  (*(volatile unsigned char*)0x3A)
#define PINA  (*(volatile unsigned char*)0x39)

#define PORTD (*(volatile unsigned char*)0x32)
#define DDRD  (*(volatile unsigned char*)0x31)
#define PIND  (*(volatile unsigned char*)0x30)

#define PORTC (*(volatile unsigned char *) 0x35)
#define DDRC  (*(volatile unsigned char *) 0x34)
#define PINC  (*(volatile unsigned char *) 0x33)

#define DDRB  (*(volatile unsigned char *) 0x37)
#define PORTB (*(volatile unsigned char *) 0x38)
#define PINB  (*(volatile unsigned char *) 0x36)

/***********************************************************************/
/******************************ADC************************/
#define ADMUX   (*(volatile unsigned char *) 0x27)

#define  REFS1  7
#define  REFS0  6
#define  ADLAR  5    // select ADCH or ADCL

#define ADCSRA  (*(volatile unsigned char *) 0x26)

#define   ADEN   7
#define   ADSC   6
#define   ADATE  5
#define   ADIF   4
#define   ADIE   3
#define   ADPS2  2
#define   ADPS1  1
#define   ADPS0  0


#define ADCH    (*(volatile unsigned char *) 0x25)
#define ADCL    (*(volatile unsigned char *) 0x24)

#define ADC    (*(volatile unsigned short *) 0x24)

/****************************INTERRUPT********************************/
#define MCUCR   (*(volatile unsigned char *) 0x55)
/* MCUCR */

#define ISC11   3
#define ISC10   2
#define ISC01   1
#define ISC00   0


#define MCUCSR  (*(volatile unsigned char *) 0x54)
/* MCUCSR */
#define ISC2    6

#define GICR    (*(volatile unsigned char *) 0x5B)
/* GICR */
#define INT1    7
#define INT0    6
#define INT2    5

/*Interrupt Vectors*/

//#define RESET_VECT  __vector_0
/*External Interrupt Request 0 */
#define INT0_VECT              __vector_1
/*External Interrupt Request 1 */
#define INT1_VECT              __vector_2
/*External Interrupt Request 2 */
#define INT2_VECT              __vector_3
/* Timer/Counter2 Compare Match */
#define  TIMER2_COMP_VECT      __vector_4
/*  Timer/Counter2 Overflow */ 
#define  TIMER2_OVF_VECT       __vector_5
/* Timer/Counter1 Capture Event */
#define  TIMER1_CAPT_VECT      __vector_6
/* Timer/Counter1 Compare Match A */
#define  TIMER1_COMPA_VECT     __vector_7
/* Timer/Counter1 Compare Match B */
#define  TIMER1_COMPB_VECT     __vector_8
/* Timer/Counter1 Overflow */
#define  TIMER1_OVF_VECT       __vector_9
/* Timer/Counter0 Compare Match*/
#define  TIMER0_COMP_VECT      __vector_10
/* Timer/Counter0 Overflow*/
#define  TIMER0_OVF_VECT       __vector_11
/* Serial Transfer Complete */
#define  SPI_STC_VECT          __vector_12
/* USART, Rx Complete*/
#define  USART_RXC_VECT        __vector_13
/* USART Data Register Empty*/
#define  USART_UDRE_VECT       __vector_14
/* USART, Tx Complete*/
#define  USART_TXC_VECT        __vector_15
/* ADC Conversion Complete */
#define  ADC_VECT              __vector_16
/* EEPROM Ready*/
#define  EE_RDY_VECT           __vector_17
/* Analog Comparator*/
#define  ANA_COMP_VECT         __vector_18
/* Two-wire Serial Interface*/
#define  TWI_VECT              __vector_19
/* Store Program Memory Ready*/
#define  SPM_RDY_VECT          __vector_20


/*enable global interrupt by assembly*/
#define sei()    __asm__ __volatile__ ("sei"::)
/*disable global interrupt*/
#define cli()    __asm__ __volatile__ ("cli"::)
#define reti()   __asm__ __volatile__ ("reti"::)
#define ret()    __asm__ __volatile__ ("ret"::)

#define  ISR_NOBLOCK     __attribute__((interrupt))
#define  ISR_NAKED     __attribute__((naked))

#define  BAD_vect    __vector_default
 
#define ISR(vector,...)   void vector(void) __attribute__((signal))__VA_ARGS__;\
                      void vector(void)
					  
 			  
					  
#endif /* MEMMAP_H_ */ 