
#include "lpc214x.h"



void Mcu_Init(void)
{
	/*Enable PLL*/
	PLL0CON = 0x01;

	/*Using Multiplier PCLK = Fosc * 5 = 60MHz*/	
	PLL0CFG = 0x24;

  /*Feed sequence*/	
	PLL0FEED = 0xAA;  //Feed sequence
	PLL0FEED = 0x55;
	
	/*Wait for the PLL to get locked*/
	while(!(PLL0STAT & 0x00000400));
	
	/*Connect PLL after PLL is locked*/
	PLL0CON = 0X03;

	/*Feed sequence*/
	PLL0FEED = 0xAA;  
	PLL0FEED = 0x55;
	
	/*Make PCLK = CCLK = 60 MHz*/
	VPBDIV = 0x01;    // PCLK is same as CCLK i.e.60 MHz
}
