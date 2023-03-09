#include"intrins.h"

#ifndef _stc32g_
	#define _stc32g_
	#include<STC32G.h>
#endif

#ifndef _uport_
	#define _uport_
	#include"universalPortSet.h"
#endif

#ifndef _u8_
	#define _u8_
	#define u8 unsigned char
#endif
	
	
void main()
{
	EAXFR = 1;
	WTST = 0x00;

	UPS_init();
	
	
	while(1)
	{}
}