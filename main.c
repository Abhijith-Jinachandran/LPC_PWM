
#include "pwm.h"
int main()
{

	int i, j;

	/*call Pwm_Init API*/
	Pwm_Init();

	/*infinite loop*/
	for(;;)
	{
		/*to vary duty cycle from 0% to 100%*/
		for(i = 0; i < 100; i++)
		{
			/*call Pwm_Init API*/
			Pwm_SetDutyCycle(4, i);

			/*delay*/
			for(j=0; j<50000; j++);
		}

		/*to vary duty cycle from 100% to 0%*/
		for(i = 100; i > 0; i--)
		{
			/*call Pwm_Init API*/
			Pwm_SetDutyCycle(4, i);

			/*delay*/
			for(j=0; j<50000; j++);
		}
	}
}
