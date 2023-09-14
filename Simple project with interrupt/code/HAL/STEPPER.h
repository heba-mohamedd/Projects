#ifndef STEPPER_H_
#define STEPPER_H_

#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "STEPPER_Config.h"
#define F_CPU 8000000
#include <util/delay.h>

typedef enum
{
	CW = 0,
	CCW ,
	}Direction_type ;

void Stepper_BiPolar_CW(void);
void Stepper_BiPolar_CCW(void);

void Stepper_BiPolar_HS_CW(void);
void Stepper_BiPolar_HS_CCW(void);

void Stepper_UnPolar_CW(void);
void Stepper_UnPolar_CCW(void);

void Stepper_UnPolar_HS_CW(void);
void Stepper_UnPolar_HS_CCW(void);

//void Stepper_Steps(u16 step);
void Stepper_Angle(s16 angle, Direction_type direction);


#endif /* STEPPER_H_ */