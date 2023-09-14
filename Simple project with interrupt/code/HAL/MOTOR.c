#include "MOTOR.h"
/*******************************PINS CONFIG*******************/
#define IN1_M1 PINB0
#define IN2_M1 PINB1  
#define IN1_M2 PINC2
#define IN2_M2 PINC3

/************************************************************/ 


void MOTOR_CW(MOTOR_type motor)
{
	switch(motor)
	{
		case Motor_1:
		DIO_WritePin(IN1_M1,HIGH);
		DIO_WritePin(IN2_M1,LOW);
		break;
		case Motor_2:
		DIO_WritePin(IN1_M2,HIGH);
		DIO_WritePin(IN2_M2,LOW);
		break;
		
	}
	
}

void MOTOR_CCW(MOTOR_type motor)
{
	switch(motor)
	{
		case Motor_1:
		DIO_WritePin(IN2_M1,HIGH);
		DIO_WritePin(IN1_M1,LOW);
		break;
		case Motor_2:
		DIO_WritePin(IN2_M2,HIGH);
		DIO_WritePin(IN1_M2,LOW);
		break;
		
	}
}
void MOTOR_Stop(MOTOR_type motor)
{
	
	switch(motor)
	{
		case Motor_1:
		DIO_WritePin(IN1_M1,LOW);
		DIO_WritePin(IN2_M1,LOW);
		break;
		case Motor_2:
		DIO_WritePin(IN1_M2,LOW);
		DIO_WritePin(IN2_M2,LOW);
		break;
		
	}
}