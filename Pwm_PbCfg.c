#include "Pwm_Types.h"

/*Generated by EB*/

Pwm_ConfigType PwmConfig[] = 
	{
		{
			/*channel select*/
			(Pwm_ChannelType)1U,
			
			/*default period*/			   /*for 65534->f = 100Hz, for 6553->f = 1KHz, for 655->f = 10KHz*/
			(Pwm_PeriodType)655U,
			
			/*default dutycycle*/		  /*value range : 0 - 65534 -> 0% - 100%*/
			(uint16)32767U,
			
			/*output polarity*/
			PWM_HIGH,
			
			/*idle state*/
			PWM_LOW,
			
			/*channel class*/
			PWM_FIXED_PERIOD
		}
	};


	