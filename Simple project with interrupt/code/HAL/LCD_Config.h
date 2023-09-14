#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

/**********************************pin config***********/
#define _4_BIT 1
#define _8_BIT 2


#define   LCD_MODE   _8_BIT

#define RS         PIND0
#define EN         PIND1


//LCD >>> for 4 bit
#define   D7   PINC3
#define   D6   PINC2
#define   D5   PINC1
#define   D4   PINC0

//LCD >>> for 8 bit
#define LCD_PORT   PC

/*******************************************************/



#endif /* LCD_CONFIG_H_ */