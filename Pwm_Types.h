#include "Platform_Types.h"
#include "Std_Types.h"


/*Type definitions*/
typedef uint8 Pwm_ChannelType;
typedef uint16 Pwm_PeriodType;

/*Enumeration definitions*/
typedef enum Pwm_OutputStateTypeTag {
    PWM_HIGH = 0,
    PWM_LOW = 1
} Pwm_OutputStateType;

typedef enum Pwm_EdgeNotificationTag {
    PWM_RISING_EDGE = 0,
    PWM_FALLING_EDGE = 1,
	  PWM_BOTH_EDGE = 2
} Pwm_EdgeNotification;

typedef enum Pwm_ChannelClassTypeTag {
    PWM_VARIABLE_PERIOD = 0,
    PWM_FIXED_PERIOD = 1,
	  PWM_FIXED_PERIOD_SHIFTED = 2
} Pwm_PwmChannelClassType;

typedef enum Pwm_PowerStateRequestResultTypeTag {
    PWM_SERVICE_ACCEPTED = 0,
    PWM_NOT_INIT,
	  PWM_SEQUENCE_ERROR,
		PWM_HW_FAILURE,
		PWM_POWER_STATE_NOT_SUPP,
		PWM_TRANS_NOT_POSSIBLE
} Pwm_PowerStateRequestResultType;

typedef enum Pwm_PowerStateTypeTag {
    PWM_FULL_POWER = 0
} Pwm_PowerStateType;


/*Structure definition*/
typedef struct Pwm_ConfigType
{
	Pwm_ChannelType ChannelNumber;
	Pwm_PeriodType PeriodType;
	uint16 DutyCycle;
	Pwm_OutputStateType Polarity;
	Pwm_OutputStateType IdleState;
	Pwm_PwmChannelClassType ChannelClass;
} Pwm_ConfigType;
