#include "DIO_Interface.h"
#include "DIO_private.h"


void DIO_Init(void)
{
	for (DIO_Pin_type i = PINA0 ; i<TOTAL_PINS ; i++)
	{
		DIO_InitPin(i , PinsStatusArray[i]);
	}
}

static void DIO_InitPin(DIO_Pin_type pin ,DIO_PinStatus_type status)
{
	
	DIO_Port_type port = pin / 8;
	u8 pin_num = pin % 8;
	
	switch(status)
	{
		case OUTPUT:
		switch(port)
		{
			case PA:
			SET_BIT(DDRA , pin_num);
			CLR_BIT(PORTA , pin_num);
			break;
			case PB:
			SET_BIT(DDRB , pin_num);
			CLR_BIT(PORTB , pin_num);
			break;
			case PC:
			SET_BIT(DDRC , pin_num);
			CLR_BIT(PORTC , pin_num);
			break;
			case PD:
			SET_BIT(DDRD , pin_num);
			CLR_BIT(PORTD , pin_num);
			break;			
		}
		break;
		case INFREE:
		switch(port)
		{
			case PA:
			CLR_BIT(DDRA , pin_num);
			CLR_BIT(PORTA , pin_num);
			break;
			case PB:
			CLR_BIT(DDRB , pin_num);
			CLR_BIT(PORTB , pin_num);
			break;
			case PC:
			CLR_BIT(DDRC , pin_num);
			CLR_BIT(PORTC , pin_num);
			break;
			case PD:
			CLR_BIT(DDRD , pin_num);
			CLR_BIT(PORTD , pin_num);
			break;
		}
		break;
		case INPULL:
		switch(port)
		{
			case PA:
			CLR_BIT(DDRA , pin_num);
			SET_BIT(PORTA , pin_num);
			break;
			case PB:
			CLR_BIT(DDRB , pin_num);
			SET_BIT(PORTB , pin_num);
			break;
			case PC:
			CLR_BIT(DDRC , pin_num);
			SET_BIT(PORTC , pin_num);
			break;
			case PD:
			CLR_BIT(DDRD , pin_num);
			SET_BIT(PORTD , pin_num);
			break;
		}
		break;
		
		
	}
}



void DIO_WritePin(DIO_Pin_type pin ,DIO_PinVoltage_type volt)
{
	
	DIO_Port_type port = pin / 8;
	u8 pin_num = pin % 8;
	switch(volt)
	{
		case LOW:
		switch(port)
		{
			case PA:
			CLR_BIT(PORTA , pin_num);
			break;
			
			case PB:
			CLR_BIT(PORTB , pin_num);
			break;
			
			case PC:
			CLR_BIT(PORTC , pin_num);
			
			break;
			case PD:
			CLR_BIT(PORTD , pin_num);
			
			break;
		}
		break;
		case HIGH:
		switch(port)
		{
			case PA:
			
			SET_BIT(PORTA , pin_num);
			break;
			case PB:
			
			SET_BIT(PORTB , pin_num);
			break;
			case PC:
			
			SET_BIT(PORTC , pin_num);
			break;
			case PD:
			
			SET_BIT(PORTD , pin_num);
			break;
		}
		break;
	}
}


DIO_PinVoltage_type DIO_ReadPin(DIO_Pin_type pin)
{
	DIO_Port_type port = pin / 8;
	u8 pin_num = pin % 8;
	
	DIO_PinVoltage_type volt = LOW;
	
	switch(port)
	{
		case PA:
		
		volt = GET_BIT(PINA , pin_num);
		break;
		case PB:
		
		volt = GET_BIT(PINB , pin_num);
		break;
		case PC:
		
		volt = GET_BIT(PINC , pin_num);
		break;
		case PD:
		
		volt = GET_BIT(PIND , pin_num);
		break;
	}
	return volt;
}




void DIO_InitPort(DIO_Port_type port , DIO_PinStatus_type status)
{
	switch(status)
	{
		case OUTPUT:
		switch(port)
		{
			case PA:
			DDRA = 0xff;
			PORTA = 0x00;
			break;
			case PB:
			DDRB = 0xff;
			PORTB = 0x00;
			break;
			case PC:
			DDRC = 0xff;
			PORTC = 0x00;
			break;
			case PD:
			DDRD = 0xff;
			PORTD = 0x00;
			break;
		}
		break;
		case INFREE:
		switch(port)
		{
			case PA:
			DDRA = 0x00;
			PORTA = 0x00;
			break;
			case PB:
			DDRB = 0x00;
			PORTB = 0x00;
			break;
			case PC:
			DDRC = 0x00;
			PORTC = 0x00;
			break;
			case PD:
			DDRD = 0x00;
			PORTD = 0x00;
			break;
		}
		break;
		case INPULL:
		switch(port)
		{
			case PA:
			DDRA = 0x00;
			PORTA = 0xff;
			break;
			case PB:
			DDRB = 0x00;
			PORTB = 0xff;
			break;
			case PC:
			DDRC = 0x00;
			PORTC = 0xff;
			break;
			case PD:
			DDRD = 0x00;
			PORTD = 0xff;
			break;
		}
		break;
	}
}


void DIO_WritePort(DIO_Port_type port , u8 value)
{
	switch(port)
	{
		case PA:
		PORTA = value ;
		break;
		
		case PB:
		PORTB = value ;
		break;
		
		case PC:
		PORTC = value ;
		
		break;
		case PD:
		PORTD = value ;
		break;
	}
}


u8 DIO_ReadPort(DIO_Port_type port)
{
	u8 value = 0;
	switch(port)
	{
		case PA:
		value = PINA;
		break;
		
		case PB:
		value = PINB;
		break;
		
		case PC:
		value = PINC;
		break;
		
		case PD:
		value = PIND;
		break;
	}
	return value;
}

void DIO_TogglePin(DIO_Pin_type pin)
{
	DIO_Port_type port = pin / 8;
	u8 pin_num = pin % 8;
	
	switch(port)
	{
		case PA:
		TOGGLE_BIT(PORTA , pin_num);
		break;
		
		case PB:
		TOGGLE_BIT(PORTB , pin_num);
		break;
		
		case PC:
		TOGGLE_BIT(PORTC , pin_num);
		break;
		
		case PD:
		TOGGLE_BIT(PORTD , pin_num);
		break;
	}
}