#include "STEPPER.h"

void Stepper_BiPolar_CW(void)
{
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
}


void Stepper_BiPolar_CCW(void)
{
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
}


void Stepper_BiPolar_HS_CW(void)
{
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	
}


void Stepper_BiPolar_HS_CCW(void)
{
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
}


void Stepper_UnPolar_CW(void)
{
	
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
}


void Stepper_UnPolar_CCW(void)
{
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	
}


void Stepper_UnPolar_HS_CW(void)
{
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
}


void Stepper_UnPolar_HS_CCW(void)
{
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,LOW);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,HIGH);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,LOW);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_WritePin(COIL1A,HIGH);
	DIO_WritePin(COIL1B,HIGH);
	DIO_WritePin(COIL2A,LOW);
	DIO_WritePin(COIL2B,LOW);
	_delay_ms(DELAY);
}



void Stepper_Angle(s16 angle , Direction_type direction)
{
	
	
	
	s16 counter = 0;
	if (direction == CW)
	{
		counter = -1 * 512.0 * angle / 360;
		for(s16 i =counter ; i < 0; i++)
		{
			Stepper_BiPolar_CW();
		}
	}
	else if (direction == CCW)
	{
		counter =  512.0 * angle / 360;
		for(s16 i = 0; i < counter; i++)
		{
			Stepper_BiPolar_CCW();
		}
	}
	
	
	
}