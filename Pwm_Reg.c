#include "Pwm_Reg.h"

/*Define the registers used as bitfield*/
volatile PwmTCReg *PWMTCR = (volatile PwmTCReg*)0xE0014004;
volatile PwmPCReg *PWMPCR = (volatile PwmPCReg*)0xE001404C;
volatile PwmMCReg *PWMMCR = (volatile PwmMCReg*)0xE0014014;
