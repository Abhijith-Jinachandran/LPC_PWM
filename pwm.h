/*==================[inclusions]============================================*/
#include "Platform_Types.h"
#include "Pwm_Types.h"

/*==================[macros]================================================*/

/*------------------[PWM Driver services IDs]-------------------------------*/
#define PWM_API_INIT															( (uint8) 0x00U )
#define PWM_API_DEINIT														( (uint8) 0x01U )
#define PWM_API_SET_DUTY_CYCLE										( (uint8) 0x02U )
#define PWM_API_SET_PERIOD_AND_DUTY								( (uint8) 0x03U )
#define PWM_API_SET_OUPTUT_TO_IDLE								( (uint8) 0x04U )
#define PWM_API_GET_OUTPUT_STATE									( (uint8) 0x05U )
#define PWM_DISABLE_NOTIFICATION									( (uint8) 0x06U )
#define PWM_API_ENABLE_NOTIFICATION								( (uint8) 0x07U )
#define PWM_API_GET_VERSION_INFO									(	(uint8) 0x08U )
#define PWM_API_SET_POWER_STATE										( (uint8) 0x09U )
#define PWM_API_GET_CURRENT_POWER_STATE						( (uint8) 0x0AU )
#define PWM_API_GET_TARGET_POWER_STATE						( (uint8) 0x0BU )
#define PWM_API_PREPARE_POWER_STATE								( (uint8) 0x0CU )
#define PWM_API_MAIN_POWER_TRANSITION_MANAGER			( (uint8) 0x0DU )


/*------------------[Development errors]------------------------------------*/
#define PWM_E_INIT_FAILED													( (uint8) 0x10U )
#define PWM_E_UNINIT															( (uint8) 0x11U )
#define PWM_E_PARAM_CHANNEL												( (uint8) 0x12U )
#define PWM_E_PERIOD_UNCHANGEABLE									( (uint8) 0x13U )
#define PWM_E_ALREADY_INITIALISED									( (uint8) 0x14U )
#define PWM_E_PARAM_POINTER												( (uint8) 0x15U )
#define PWM_E_POWER_STATE_NOT_SUPPORTED						( (uint8) 0x17U )
#define PWM_E_TRANSITION_NOT_POSSIBLE							( (uint8) 0x18U )
#define PWM_E_PERIPHERAL_NOT_PREPARED							( (uint8) 0x19U )



/*Pwm macro*/
#define PWM_MAX 		( (uint16) 65534U )
#define PWM_CLK 		( (uint16) 60U )
#define MAX_PERIOD 		( (uint16) 10000U )

/*Data type and function declaration*/
extern Pwm_ConfigType PwmConfig[];
void Pwm_Init(void);
void Port_Init(void);
void Mcu_Init(void);
void Pwm_Init_confg(const Pwm_ConfigType *ConfigPtr);
void Pwm_SetDutyCycle(Pwm_ChannelType ChannelNumber, uint16 DutyCycle);




