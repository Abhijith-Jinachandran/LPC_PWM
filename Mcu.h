#include "Platform_Types.h"

/*access PLL reg using bitfield*/
typedef struct
{
	uint8 PLL_ENABLE: 1;
	uint8 PLL_CONNECT: 1;
	uint8 RES : 6; 
}PLLControl;

typedef struct
{
	uint8 PLL_MULT : 5;
	uint8 PLL_DIV : 2;
	uint8 RES : 1;
}PLLConfig; 

/*declare registers*/
extern volatile PLLControl *PLLCON;
extern volatile PLLConfig *PLLCFG;



