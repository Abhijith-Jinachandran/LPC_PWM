#include "pwm.h"
#include "Std_Types.h"
#include "Pwm_Reg.h"
#include "Mcu.h"

/*Pwm_Config definition*/
void Pwm_Init_confg(const Pwm_ConfigType *ConfigPtr)
{
	/*initialise all variables*/
	
	Pwm_ChannelType ChannelNumber;
	Pwm_PeriodType DefaultPeriod;
	uint16 DefaultDutyCycle;
	Pwm_OutputStateType DefaultPolarity;
	Pwm_OutputStateType DefaultIdleState;
	
	/*input from EB config PBCfg file*/
	
	ChannelNumber = ConfigPtr ->ChannelNumber;
	DefaultPeriod = ConfigPtr ->PeriodType;
	DefaultDutyCycle = ConfigPtr ->DutyCycle;
	DefaultPolarity = ConfigPtr ->Polarity;
	DefaultIdleState = ConfigPtr ->IdleState;
	
	/*Call Port_Init function*/
	Port_Init();
	
	/*Call Mcu_Init function*/
	Mcu_Init();
	
	/*Set clock cycle as 60*/	
	PWMPR = PWM_CLK - 1U; 

	/*Set default PWM period*/
	PWMMR0 = (DefaultPeriod*MAX_PERIOD)/PWM_MAX;		//10000

	/*set default PWM duty cycle*/
	PWMMR4 = (DefaultDutyCycle*PWMMR0)/PWM_MAX;	//5000

	/*Reset on PWMTC = PWMMR0*/
	PWMMCR->PWMMR0R = ENABLE;   
	
	/*duty cycle updated only at end of each period for PWM4*/
	PWMLER = 0x11;  
	
	/*Enable PWM output channel configured*/
	PWMPCR->PWMENA4 = ENABLE;   	

	/*Timer and prescale reset on next PCLK*/
	PWMTCR->COUNTER_RESET = ENABLE;

/*Enable counter*/
	PWMTCR->COUNTER_ENABLE = ENABLE; 

	/*Timer and prescale reset on next PCLK*/
	PWMTCR->COUNTER_RESET = DISABLE;
	
	/*Start PWM*/
	PWMTCR->PWM_ENABLE = ENABLE;
	  
}

/*Pwm_Init API definition*/
void Pwm_Init()
{
	Pwm_Init_confg(&PwmConfig[0]);
}

/*Pwm Setdutycycle API definition*/
void Pwm_SetDutyCycle(Pwm_ChannelType ChannelNumber, uint16 DutyCycle)
{
	/*Update the MR4 register with new dutycycle*/
	PWMMR4 = (DutyCycle*PWMMR0)/100;
	
	/*Update the MR4 register only after end of period*/
	PWMLER = 0x10;
}


