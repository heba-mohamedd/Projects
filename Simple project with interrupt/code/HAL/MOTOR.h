#ifndef MOTOR_H_
#define MOTOR_H_

#include "DIO_Interface.h"

typedef enum
{
	Motor_1 = 0,
	Motor_2,

	
	}MOTOR_type;

void MOTOR_CW(MOTOR_type motor);
void MOTOR_CCW(MOTOR_type motor);
void MOTOR_Stop(MOTOR_type motor);




#endif /* MOTOR_H_ */