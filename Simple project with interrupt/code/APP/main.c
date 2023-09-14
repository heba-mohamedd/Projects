#include "MCAL/DIO_Interface.h"
#include "HAL/LCD.h"
#include "STD_TYPES.h"
#include "UTils.h"
#include "MemMap.h"
#include "HAL/Keypad.h"
#include "MCAL/EXT_Interrupt.h"
#include "HAL/MOTOR.h"
#include "HAL/STEPPER.h"
#define F_CPU  8000000UL
#include <util/delay.h>


const u8 PASS[4] = {'1' , '2' , '3' , '4'};
volatile u8 flag = 0;

#define Steps 2


void func(void)
{
	flag = 1;
}

int main(void)
{
	u8 key ;
	DIO_Init();
	
	
	LCD_Init();
	sei();
	EXI_TriggerEdge(EX_INT0 , FALLING_EDGE);
	EXI_Enable(EX_INT0);
	EXI_SetCallBack(EX_INT0 , func);
	
	
	u8 pass[4];
	u8 Char , count = 0;
	
	while(1)
	{
		
	
	
		if (flag == 1)
		{
		
			LCD_GoTo(0 , 0);
			LCD_WriteString("WelCome...");
			_delay_ms(100);

				start:
				count = 0;
				LCD_GoTo(0 , 0);
				LCD_WriteString("Enter password : ");
				LCD_GoTo(1 ,0 );
				while(count < 4)
				{
					Char = Keypad_GetChar();
					if (Char != 'N')
					{
						LCD_WriteChar('*');
						pass[count] = Char;
						count ++;
					}
				}
				_delay_ms(50);
				if (count == 4)
				{
					for (u8 i = 0 ;i < 4 ;i++)
					{
						if (PASS[i] != pass[i])
						{
							LCD_WriteCommend(0x01);
							LCD_GoToWriteString(0 , 0 , "wrong password");
							_delay_ms(100);
							goto start;
						}
					}
				}
				LCD_WriteCommend(0x01);
				LCD_GoToWriteString(0 , 0 , "correct password");
				_delay_ms(100);
		
				LCD_WriteCommend(0x01);
				LCD_GoToWriteString(0 , 0 , "Choose Option...");
				_delay_ms(100);
		
				lcd:
				key = 'N';
				LCD_WriteCommend(0x01);
				LCD_GoToWriteString(0 , 0 , "1-DCmotor 3-Exit");
				LCD_GoToWriteString(1 , 0 , "2-Stepper Motor");
				_delay_ms(10);
		
				while(key == 'N') key = Keypad_GetChar();

				if (key == '1')
				{
					key = 'N';
					LCD_WriteCommend(0x01);
					LCD_GoToWriteString(0 , 0 , "1-Rotate CW");
					LCD_GoToWriteString(1 , 0 , "2-Rotate CCW");
					_delay_ms(50);
						while(key == 'N') key = Keypad_GetChar();
						if (key =='1')
						{
							MOTOR_CW(Motor_1);
				
							goto lcd;
						}
						else if (key == '2')
						{
							MOTOR_CCW(Motor_1);
				
							goto lcd;
						}
			 
				}
				else if (key == '2')
				{
					
					key = 'N';
					LCD_WriteCommend(0x01);
					LCD_GoToWriteString(0 , 0 , "1-Rotate CW");
					LCD_GoToWriteString(1 , 0 , "2-Rotate CCW");
					_delay_ms(50);
					while(key == 'N') key = Keypad_GetChar();
					
					if (key =='1')
					{
						Stepper_Angle(Steps , CW);
				
						goto lcd;
					}
					else if (key == '2')
					{
						
			            Stepper_Angle(Steps , CCW);
						goto lcd;
					}
				}
				else if (key == '3')
				{
			
					flag = 0;
					MOTOR_Stop(Motor_1);
					LCD_WriteCommend(0x01);
			
				}	
			}
		}
}

