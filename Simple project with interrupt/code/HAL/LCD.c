#include "LCD.h"


#if LCD_MODE == _8_BIT
static void LCD_Send(u8 Command)
{
	
	DIO_WritePort(LCD_PORT , Command);
	_delay_ms(1);
	DIO_WritePin(EN , HIGH);
	_delay_ms(1);
	DIO_WritePin(EN , LOW);
}


void LCD_Init()
{
	
	_delay_ms(40);
	LCD_WriteCommend(0x38);   // 2 line   >>5*8
	_delay_ms(1);
	LCD_WriteCommend(0x0c);  //  display on >>> cursor off  (0x0f)>>> blink off
	_delay_ms(1);
	LCD_WriteCommend(0x01);  //display clear
	_delay_ms(2);
	LCD_WriteCommend(0x06);  // increment on>>
	
	
	
}

#elif LCD_MODE == _4_BIT

static void LCD_Send(u8 Command)
{
	
	DIO_WritePin(D7 , GET_BIT(Command , 7));
	DIO_WritePin(D6 , GET_BIT(Command , 6));
	DIO_WritePin(D5 , GET_BIT(Command , 5));
	DIO_WritePin(D4 , GET_BIT(Command , 4));
	_delay_ms(1);
	DIO_WritePin(EN , HIGH);
	_delay_ms(1);
	DIO_WritePin(EN , LOW);
	
	DIO_WritePin(D7 , GET_BIT(Command , 3));
	DIO_WritePin(D6 , GET_BIT(Command , 2));
	DIO_WritePin(D5 , GET_BIT(Command , 1));
	DIO_WritePin(D4 , GET_BIT(Command , 0));
	_delay_ms(1);
	DIO_WritePin(EN , HIGH);
	_delay_ms(1);
	DIO_WritePin(EN , LOW);
}


void LCD_Init()
{
	
	_delay_ms(40);
	LCD_WriteCommend(0x20);
	LCD_WriteCommend(0x28);    //4bit mode >>DL>data legth
	//LCD_WriteCommend(0x38);   // 2 line   >>5*8
	
	_delay_ms(1);
	LCD_WriteCommend(0x0c);  //  display on >>> cursor off  (0x0f)>>> blink off
	_delay_ms(1);
	LCD_WriteCommend(0x01);  //display clear
	_delay_ms(2);
	LCD_WriteCommend(0x06);  // increment on>>
	
	
	
}

#endif




void LCD_WriteCommend(u8 Commend)
{
	DIO_WritePin(RS , LOW);
	
	LCD_Send(Commend);
}

/***************************************************************/

void LCD_WriteChar(u8 data)
{
	DIO_WritePin(RS , HIGH);
	LCD_Send(data);
	
}


void LCD_WriteString(u8 *str)
{
	int i = 0;
	while(str[i])
	{
		
		LCD_WriteChar(str[i]);
		i++;
		/*if (i == 16)
		{
			LCD_WriteCommend(0xc0);
		}*/
	}
}

void LCD_WriteNumber(u32 num)
{
	u8 NumebrAsString[10];
	itoa(num , NumebrAsString,10);
	LCD_WriteString(NumebrAsString);
	
	
	/*u8 str[20];
	u8 rem , i =0;
	if (num == 0)
	{
		LCD_WriteChar('0');
		return;
	}
	if (num < 0)
	{
		num = num *-1;
		LCD_WriteChar('-');
	}
	while(num>0)
	{
		rem = num % 10;
		str[i] = rem + '0';
		num = num /10;
		i++;
	}
	
	for (u8 j = i-1 ; j >= 0 ;j--)
	{
		LCD_WriteChar(str[j]);
		
	}*/
}


void LCD_WriteBinary(u8 num)
{
	s8 i ;
	
	for (i = 7 ; i>= 0 ; i--)
	{
		if ((num>>i)&1)
		{
			LCD_WriteChar('1');
		}
		else LCD_WriteChar('0');
	}
	
}

void LCD_GoTo(u8 line , u8 cell)
{
	if (line == 0 )
	{
		LCD_WriteCommend(0x80+cell);
	}
	else if (line == 1)
	{
		LCD_WriteCommend(0x80+0x40+cell);
	}
}


void LCD_WriteNumber_4D(u8 num)
{
	LCD_WriteChar((num%10000)/1000+'0');
	LCD_WriteChar((num%1000)/100+'0');
	LCD_WriteChar((num%100)/10+'0');
	LCD_WriteChar((num%10)/1+'0');
	
}

void LCD_GoToClear(u8 line , u8 cell , u8 numOfCells)
{
	u8 i ;
	LCD_GoTo(line , cell);
	for (i = 0 ; i<numOfCells ; i++)
	{
		LCD_WriteChar(' ');
	}
}


void LCD_GoToWriteString(u8 line , u8 cell , u8 *str)
{
	LCD_GoTo(line , cell);
	LCD_WriteString(str);
}

void LCD_Create_Character(u8*pattern , u8 address)
{
	u8 iLoop = 0;
	LCD_WriteCommend(0x40+(address*8)); //Send the Address of CGRAM
	for (iLoop = 0; iLoop<8 ; iLoop++)
	{
		LCD_WriteChar(pattern[iLoop]); //Pass the bytes of pattern on LCD
	}
	
	LCD_WriteCommend(0x80);  // send to DDRAM
}