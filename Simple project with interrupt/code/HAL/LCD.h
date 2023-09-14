#ifndef LCD_H_
#define LCD_H_

#define F_CPU 8000000
#include <util/delay.h>
 
#include "DIO_Interface.h"
#include "LCD_Config.h"



void LCD_Init();
void LCD_WriteCommend(u8 Commend);

void LCD_WriteString(u8 *str);
void LCD_WriteNumber(u32 num);
void LCD_WriteChar(u8 data);
void LCD_WriteBinary(u8 num);
void LCD_WriteNumber_4D(u8 num);
//void LCD_WriteHex(u8 num);

void LCD_GoTo(u8 line , u8 cell);
void LCD_GoToClear(u8 line , u8 cell , u8 numOfCells);
void LCD_GoToWriteString(u8 line , u8 cell , u8 *str);

void LCD_Create_Character(u8*pattern , u8 address);




#endif /* LCD_H_ */