

#include "Keypad.h"
u8 KEYPAD_R[] = {R0 ,R1 ,R2 ,R3};
u8 KEYPAD_C[] = {C0 ,C1 ,C2 ,C3};


u8 Keypad_GetChar()
{
	
		int i ,j;
		for (i = 0 ; i < 4 ; i++)
		{
			
			DIO_WritePin(C0 , HIGH);
			DIO_WritePin(C1 , HIGH);
			DIO_WritePin(C2 , HIGH);
			DIO_WritePin(C3 , HIGH);
			
			DIO_WritePin(KEYPAD_C[i] , LOW);
			
			for (j = 0 ;j < 4 ;j++)
			{
				if (!(DIO_ReadPin(KEYPAD_R[j])))
				{
					while(!(DIO_ReadPin(KEYPAD_R[j])));
					
					switch(i)
					{
						case (0):
						if(j == 0) return '7';
						else if(j == 1) return '4';
						else if(j == 2) return '1';
						else if(j == 3) return '#';
						break;
						case (1):
						if(j == 0) return '8';
						else if(j == 1) return '5';
						else if(j == 2) return '2';
						else if(j == 3) return '0';
						break;
						case (2):
						if(j == 0) return '9';
						else if(j == 1) return '6';
						else if(j == 2) return '3';
						else if(j == 3) return '*';
						break;
						case (3):
						if(j == 0) return 'A';
						else if(j == 1) return 'B';
						else if(j == 2) return 'C';
						else if(j == 3) return 'D';
						break;
					}
					
					
				}
			}
		}
		
		return 'N';
	
}