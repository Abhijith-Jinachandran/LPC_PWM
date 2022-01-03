#include "Pwm_Reg.h"

void Port_Init(void)
{
	/*Set Port 0.8 as PWM4 output*/
	PINSEL0 = 0x00020000;		
	
	/*Set Port 1.26 as Debug port*/
	PINSEL2 = 0x00000004;		
}
