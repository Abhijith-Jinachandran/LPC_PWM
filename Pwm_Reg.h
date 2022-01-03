#include "Std_Types.h"


/* Pulse Width Modulator (PWM) */
#define PWMIR           (*((volatile unsigned long *) 0xE0014000))
#define PWMTC           (*((volatile unsigned long *) 0xE0014008))
#define PWMPR           (*((volatile unsigned long *) 0xE001400C))
#define PWMPC           (*((volatile unsigned long *) 0xE0014010))
#define PWMMR0          (*((volatile unsigned long *) 0xE0014018))
#define PWMMR1          (*((volatile unsigned long *) 0xE001401C))
#define PWMMR2          (*((volatile unsigned long *) 0xE0014020))
#define PWMMR3          (*((volatile unsigned long *) 0xE0014024))
#define PWMMR4          (*((volatile unsigned long *) 0xE0014040))
#define PWMMR5          (*((volatile unsigned long *) 0xE0014044))
#define PWMMR6          (*((volatile unsigned long *) 0xE0014048))
#define PWMLER          (*((volatile unsigned long *) 0xE0014050))
#define APBDIV          (*((volatile unsigned char *) 0xE01FC100))
#define PLL0STAT        (*((volatile unsigned short*) 0xE01FC088))
#define PLL0FEED        (*((volatile unsigned char *) 0xE01FC08C))
	

/*Port selection*/
#define PINSEL0         (*((volatile unsigned long *) 0xE002C000))
#define PINSEL1         (*((volatile unsigned long *) 0xE002C004))
#define PINSEL2         (*((volatile unsigned long *) 0xE002C014))
	
/*assigning registers using bitfields*/ 
typedef struct
{
	volatile uint8 COUNTER_ENABLE : 1;    /*Enable counter*/
	volatile uint8 COUNTER_RESET  : 1;		/*Reset counter*/
	volatile uint8 RES_1      		: 1;		
	volatile uint8 PWM_ENABLE 		: 1;		/*Enable PWM module*/
	volatile uint8 RES_2 					: 1;
	volatile uint8 RES_3 					: 1;
	volatile uint8 RES_4 					: 1;
	volatile uint8 RES_5 					: 1;
}PwmTCReg;

typedef struct
{
	volatile uint16 RES_1 	 : 1;
	volatile uint16 RES_2 	 : 1;
	volatile uint16 PWMSEL2  : 1;
	volatile uint16 PWMSEL3  : 1;
	volatile uint16 PWMSEL4  : 1;
	volatile uint16 PWMSEL5  : 1;
	volatile uint16 PWMSEL6  : 1;
	volatile uint16 RES_3    : 1;
	volatile uint16 RES_4		 : 1;
	volatile uint16 PWMENA1  : 1;
	volatile uint16 PWMENA2  : 1;
	volatile uint16 PWMENA3  : 1;
	volatile uint16 PWMENA4  : 1;
	volatile uint16 PWMENA5  : 1;
	volatile uint16 PWMENA6  : 1;
	volatile uint16 RES_5    : 1;
}PwmPCReg;

typedef struct
{
	volatile uint32 PWMMR0I : 1;
	volatile uint32 PWMMR0R : 1;
	volatile uint32 PWMMR0S : 1;
	volatile uint32 PWMMR1I : 1;
	volatile uint32 PWMMR1R : 1;
	volatile uint32 PWMMR1S : 1;
	volatile uint32 PWMMR2I : 1;
	volatile uint32 PWMMR2R : 1;
	volatile uint32 PWMMR2S : 1;
	volatile uint32 PWMMR3I : 1;
	volatile uint32 PWMMR3R : 1;
	volatile uint32 PWMMR3S : 1;
	volatile uint32 PWMMR4I : 1;
	volatile uint32 PWMMR4R : 1;
	volatile uint32 PWMMR4S : 1;
	volatile uint32 PWMMR5I : 1;
	volatile uint32 PWMMR5R : 1;
	volatile uint32 PWMMR5S : 1;
	volatile uint32 PWMMR6I : 1;
	volatile uint32 PWMMR6R : 1;
	volatile uint32 PWMMR6S : 1;
	volatile uint32 RES		  : 11;
}PwmMCReg;

/*declaring register parameter*/
extern volatile PwmTCReg *PWMTCR;
extern volatile PwmPCReg *PWMPCR;
extern volatile PwmMCReg *PWMMCR;



