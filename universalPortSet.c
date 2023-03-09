#ifndef _stc32g_
	#define _stc32g_
	#include<STC32G.h>
#endif

#ifndef _u8_
	#define _u8_
	#define u8 unsigned char
#endif

#ifndef _uport_
	#define _uport_
	#include"universalPortSet.h"
#endif
void UPS_init()
{
	P0M0 = 0x00;
	P0M1 = 0x00;
	P1M0 = 0x00;
	P1M1 = 0x00;
	P2M0 = 0x00;
	P2M1 = 0x00;
	P3M0 = 0x00;
	P3M1 = 0x00;
	P4M0 = 0x00;
	P4M1 = 0x00;
	P5M0 = 0x00;
	P5M1 = 0x00;
	P6M0 = 0x00;
	P6M1 = 0x00;
	P7M0 = 0x00;
	P7M1 = 0x00;
	
	TMOD = 0x10;
	
	TL0 = 0xcc;		//根据实际修改
	TH0 = 0xff;		//同上
	TR0 = 1;				//start timer0
	ET0 = 1;				//enable interrupt1
	EA = 1;
}
	
//========用于pwm的终端函数==============
void _UPS_pwm_interrupt() interrupt 1
{
	//专门用于pwmWrite的中断，占用了计时器0
	static u8 xdata cycle = 20;	//精度0.05
	
	#ifdef _UP00_pwm_
	static u8 xdata _pwm_P00 = 0;	//初始化为0,也就是说需要一个周期才能开始正常工作
	#endif
	#ifdef _UP01_pwm_
  static u8 xdata _pwm_P01 = 0;
  #endif
  #ifdef _UP02_pwm_
  static u8 xdata _pwm_P02 = 0;
  #endif
  #ifdef _UP03_pwm_
  static u8 xdata _pwm_P03 = 0;
  #endif
  #ifdef _UP04_pwm_
  static u8 xdata _pwm_P04 = 0;
  #endif
  #ifdef _UP05_pwm_
  static u8 xdata _pwm_P05 = 0;
  #endif
  #ifdef _UP06_pwm_
  static u8 xdata _pwm_P06 = 0;
  #endif
  #ifdef _UP07_pwm_
  static u8 xdata _pwm_P07 = 0;
  #endif
  #ifdef _UP10_pwm_
  static u8 xdata _pwm_P10 = 0;
  #endif
  #ifdef _UP11_pwm_
  static u8 xdata _pwm_P11 = 0;
  #endif
  #ifdef _UP12_pwm_
  static u8 xdata _pwm_P12 = 0;
  #endif
  #ifdef _UP13_pwm_
  static u8 xdata _pwm_P13 = 0;
  #endif
  #ifdef _UP14_pwm_
  static u8 xdata _pwm_P14 = 0;
  #endif
  #ifdef _UP15_pwm_
  static u8 xdata _pwm_P15 = 0;
  #endif
  #ifdef _UP16_pwm_
  static u8 xdata _pwm_P16 = 0;
  #endif
  #ifdef _UP17_pwm_
  static u8 xdata _pwm_P17 = 0;
  #endif
  #ifdef _UP20_pwm_
  static u8 xdata _pwm_P20 = 0;
  #endif
  #ifdef _UP21_pwm_
  static u8 xdata _pwm_P21 = 0;
  #endif
  #ifdef _UP22_pwm_
  static u8 xdata _pwm_P22 = 0;
  #endif
  #ifdef _UP23_pwm_
  static u8 xdata _pwm_P23 = 0;
  #endif
  #ifdef _UP24_pwm_
  static u8 xdata _pwm_P24 = 0;
  #endif
  #ifdef _UP25_pwm_
  static u8 xdata _pwm_P25 = 0;
  #endif
  #ifdef _UP26_pwm_
  static u8 xdata _pwm_P26 = 0;
  #endif
  #ifdef _UP27_pwm_
  static u8 xdata _pwm_P27 = 0;
  #endif
  #ifdef _UP30_pwm_
  static u8 xdata _pwm_P30 = 0;
  #endif
  #ifdef _UP31_pwm_
  static u8 xdata _pwm_P31 = 0;
  #endif
  #ifdef _UP32_pwm_
  static u8 xdata _pwm_P32 = 0;
  #endif
  #ifdef _UP33_pwm_
  static u8 xdata _pwm_P33 = 0;
  #endif
  #ifdef _UP34_pwm_
  static u8 xdata _pwm_P34 = 0;
  #endif
  #ifdef _UP35_pwm_
  static u8 xdata _pwm_P35 = 0;
  #endif
  #ifdef _UP36_pwm_
  static u8 xdata _pwm_P36 = 0;
  #endif
  #ifdef _UP37_pwm_
  static u8 xdata _pwm_P37 = 0;
  #endif
  #ifdef _UP40_pwm_
  static u8 xdata _pwm_P40 = 0;
  #endif
  #ifdef _UP41_pwm_
  static u8 xdata _pwm_P41 = 0;
  #endif
  #ifdef _UP42_pwm_
  static u8 xdata _pwm_P42 = 0;
  #endif
  #ifdef _UP43_pwm_
  static u8 xdata _pwm_P43 = 0;
  #endif
  #ifdef _UP44_pwm_
  static u8 xdata _pwm_P44 = 0;
  #endif
  #ifdef _UP45_pwm_
  static u8 xdata _pwm_P45 = 0;
  #endif
  #ifdef _UP46_pwm_
  static u8 xdata _pwm_P46 = 0;
  #endif
  #ifdef _UP47_pwm_
  static u8 xdata _pwm_P47 = 0;
  #endif
  #ifdef _UP50_pwm_
  static u8 xdata _pwm_P50 = 0;
  #endif
  #ifdef _UP51_pwm_
  static u8 xdata _pwm_P51 = 0;
  #endif
  #ifdef _UP52_pwm_
  static u8 xdata _pwm_P52 = 0;
  #endif
  #ifdef _UP53_pwm_
  static u8 xdata _pwm_P53 = 0;
  #endif
  #ifdef _UP54_pwm_
  static u8 xdata _pwm_P54 = 0;
  #endif
  #ifdef _UP55_pwm_
  static u8 xdata _pwm_P55 = 0;
  #endif
  #ifdef _UP56_pwm_
  static u8 xdata _pwm_P56 = 0;
  #endif
  #ifdef _UP57_pwm_
  static u8 xdata _pwm_P57 = 0;
  #endif
  #ifdef _UP60_pwm_
  static u8 xdata _pwm_P60 = 0;
  #endif
  #ifdef _UP61_pwm_
  static u8 xdata _pwm_P61 = 0;
  #endif
  #ifdef _UP62_pwm_
  static u8 xdata _pwm_P62 = 0;
  #endif
  #ifdef _UP63_pwm_
  static u8 xdata _pwm_P63 = 0;
  #endif
  #ifdef _UP64_pwm_
  static u8 xdata _pwm_P64 = 0;
  #endif
  #ifdef _UP65_pwm_
  static u8 xdata _pwm_P65 = 0;
  #endif
  #ifdef _UP66_pwm_
  static u8 xdata _pwm_P66 = 0;
  #endif
  #ifdef _UP67_pwm_
  static u8 xdata _pwm_P67 = 0;
  #endif
  #ifdef _UP70_pwm_
  static u8 xdata _pwm_P70 = 0;
  #endif
  #ifdef _UP71_pwm_
  static u8 xdata _pwm_P71 = 0;
  #endif
  #ifdef _UP72_pwm_
  static u8 xdata _pwm_P72 = 0;
  #endif
  #ifdef _UP73_pwm_
  static u8 xdata _pwm_P73 = 0;
  #endif
  #ifdef _UP74_pwm_
  static u8 xdata _pwm_P74 = 0;
  #endif
  #ifdef _UP75_pwm_
  static u8 xdata _pwm_P75 = 0;
  #endif
  #ifdef _UP76_pwm_
  static u8 xdata _pwm_P76 = 0;
  #endif
  #ifdef _UP77_pwm_
  static u8 xdata _pwm_P77 = 0;
  #endif
	
	if(cycle == 0)	//重置
	{
		cycle = 20;
		#ifdef _UP00_pwm_
    _pwm_P00 = UP00.pwm_value;
    #endif
    #ifdef _UP01_pwm_
    _pwm_P01 = UP01.pwm_value;
    #endif
    #ifdef _UP02_pwm_
    _pwm_P02 = UP02.pwm_value;
    #endif
    #ifdef _UP03_pwm_
    _pwm_P03 = UP03.pwm_value;
    #endif
    #ifdef _UP04_pwm_
    _pwm_P04 = UP04.pwm_value;
    #endif
    #ifdef _UP05_pwm_
    _pwm_P05 = UP05.pwm_value;
    #endif
    #ifdef _UP06_pwm_
    _pwm_P06 = UP06.pwm_value;
    #endif
    #ifdef _UP07_pwm_
    _pwm_P07 = UP07.pwm_value;
    #endif
    #ifdef _UP10_pwm_
    _pwm_P10 = UP10.pwm_value;
    #endif
    #ifdef _UP11_pwm_
    _pwm_P11 = UP11.pwm_value;
    #endif
    #ifdef _UP12_pwm_
    _pwm_P12 = UP12.pwm_value;
    #endif
    #ifdef _UP13_pwm_
    _pwm_P13 = UP13.pwm_value;
    #endif
    #ifdef _UP14_pwm_
    _pwm_P14 = UP14.pwm_value;
    #endif
    #ifdef _UP15_pwm_
    _pwm_P15 = UP15.pwm_value;
    #endif
    #ifdef _UP16_pwm_
    _pwm_P16 = UP16.pwm_value;
    #endif
    #ifdef _UP17_pwm_
    _pwm_P17 = UP17.pwm_value;
    #endif
    #ifdef _UP20_pwm_
    _pwm_P20 = UP20.pwm_value;
    #endif
    #ifdef _UP21_pwm_
    _pwm_P21 = UP21.pwm_value;
    #endif
    #ifdef _UP22_pwm_
    _pwm_P22 = UP22.pwm_value;
    #endif
    #ifdef _UP23_pwm_
    _pwm_P23 = UP23.pwm_value;
    #endif
    #ifdef _UP24_pwm_
    _pwm_P24 = UP24.pwm_value;
    #endif
    #ifdef _UP25_pwm_
    _pwm_P25 = UP25.pwm_value;
    #endif
    #ifdef _UP26_pwm_
    _pwm_P26 = UP26.pwm_value;
    #endif
    #ifdef _UP27_pwm_
    _pwm_P27 = UP27.pwm_value;
    #endif
    #ifdef _UP30_pwm_
    _pwm_P30 = UP30.pwm_value;
    #endif
    #ifdef _UP31_pwm_
    _pwm_P31 = UP31.pwm_value;
    #endif
    #ifdef _UP32_pwm_
    _pwm_P32 = UP32.pwm_value;
    #endif
    #ifdef _UP33_pwm_
    _pwm_P33 = UP33.pwm_value;
    #endif
    #ifdef _UP34_pwm_
    _pwm_P34 = UP34.pwm_value;
    #endif
    #ifdef _UP35_pwm_
    _pwm_P35 = UP35.pwm_value;
    #endif
    #ifdef _UP36_pwm_
    _pwm_P36 = UP36.pwm_value;
    #endif
    #ifdef _UP37_pwm_
    _pwm_P37 = UP37.pwm_value;
    #endif
    #ifdef _UP40_pwm_
    _pwm_P40 = UP40.pwm_value;
    #endif
    #ifdef _UP41_pwm_
    _pwm_P41 = UP41.pwm_value;
    #endif
    #ifdef _UP42_pwm_
    _pwm_P42 = UP42.pwm_value;
    #endif
    #ifdef _UP43_pwm_
    _pwm_P43 = UP43.pwm_value;
    #endif
    #ifdef _UP44_pwm_
    _pwm_P44 = UP44.pwm_value;
    #endif
    #ifdef _UP45_pwm_
    _pwm_P45 = UP45.pwm_value;
    #endif
    #ifdef _UP46_pwm_
    _pwm_P46 = UP46.pwm_value;
    #endif
    #ifdef _UP47_pwm_
    _pwm_P47 = UP47.pwm_value;
    #endif
    #ifdef _UP50_pwm_
    _pwm_P50 = UP50.pwm_value;
    #endif
    #ifdef _UP51_pwm_
    _pwm_P51 = UP51.pwm_value;
    #endif
    #ifdef _UP52_pwm_
    _pwm_P52 = UP52.pwm_value;
    #endif
    #ifdef _UP53_pwm_
    _pwm_P53 = UP53.pwm_value;
    #endif
    #ifdef _UP54_pwm_
    _pwm_P54 = UP54.pwm_value;
    #endif
    #ifdef _UP55_pwm_
    _pwm_P55 = UP55.pwm_value;
    #endif
    #ifdef _UP56_pwm_
    _pwm_P56 = UP56.pwm_value;
    #endif
    #ifdef _UP57_pwm_
    _pwm_P57 = UP57.pwm_value;
    #endif
    #ifdef _UP60_pwm_
    _pwm_P60 = UP60.pwm_value;
    #endif
    #ifdef _UP61_pwm_
    _pwm_P61 = UP61.pwm_value;
    #endif
    #ifdef _UP62_pwm_
    _pwm_P62 = UP62.pwm_value;
    #endif
    #ifdef _UP63_pwm_
    _pwm_P63 = UP63.pwm_value;
    #endif
    #ifdef _UP64_pwm_
    _pwm_P64 = UP64.pwm_value;
    #endif
    #ifdef _UP65_pwm_
    _pwm_P65 = UP65.pwm_value;
    #endif
    #ifdef _UP66_pwm_
    _pwm_P66 = UP66.pwm_value;
    #endif
    #ifdef _UP67_pwm_
    _pwm_P67 = UP67.pwm_value;
    #endif
    #ifdef _UP70_pwm_
    _pwm_P70 = UP70.pwm_value;
    #endif
    #ifdef _UP71_pwm_
    _pwm_P71 = UP71.pwm_value;
    #endif
    #ifdef _UP72_pwm_
    _pwm_P72 = UP72.pwm_value;
    #endif
    #ifdef _UP73_pwm_
    _pwm_P73 = UP73.pwm_value;
    #endif
    #ifdef _UP74_pwm_
    _pwm_P74 = UP74.pwm_value;
    #endif
    #ifdef _UP75_pwm_
    _pwm_P75 = UP75.pwm_value;
    #endif
    #ifdef _UP76_pwm_
    _pwm_P76 = UP76.pwm_value;
    #endif
    #ifdef _UP77_pwm_
    _pwm_P77 = UP77.pwm_value;
    #endif
	}
	//递减
	cycle--;
	
	#ifdef _UP00_pwm_
  if(_pwm_P00)     
  {
    _pwm_P00--;    
    P00 = 1;       
  }
  else
  {P00 = 0;}       
  #endif
  #ifdef _UP01_pwm_
  if(_pwm_P01)     
  {
    _pwm_P01--;    
    P01 = 1;       
  }
  else
  {P01 = 0;}       
  #endif
  #ifdef _UP02_pwm_
  if(_pwm_P02)     
  {
    _pwm_P02--;
    P02 = 1;
  }
  else
  {P02 = 0;}
  #endif
  #ifdef _UP03_pwm_
  if(_pwm_P03)
  {
    _pwm_P03--;
    P03 = 1;
  }
  else
  {P03 = 0;}
  #endif
  #ifdef _UP04_pwm_
  if(_pwm_P04)
  {
    _pwm_P04--;
    P04 = 1;
  }
  else
  {P04 = 0;}
  #endif
  #ifdef _UP05_pwm_
  if(_pwm_P05)
  {
    _pwm_P05--;
    P05 = 1;
  }
  else
  {P05 = 0;}
  #endif
  #ifdef _UP06_pwm_
  if(_pwm_P06)
  {
    _pwm_P06--;
    P06 = 1;
  }
  else
  {P06 = 0;}
  #endif
  #ifdef _UP07_pwm_
  if(_pwm_P07)
  {
    _pwm_P07--;
    P07 = 1;
  }
  else
  {P07 = 0;}
  #endif
  #ifdef _UP10_pwm_
  if(_pwm_P10)
  {
    _pwm_P10--;
    P10 = 1;
  }
  else
  {P10 = 0;}
  #endif
  #ifdef _UP11_pwm_
  if(_pwm_P11)
  {
    _pwm_P11--;
    P11 = 1;
  }
  else
  {P11 = 0;}
  #endif
  #ifdef _UP12_pwm_
  if(_pwm_P12)
  {
    _pwm_P12--;
    P12 = 1;
  }
  else
  {P12 = 0;}
  #endif
  #ifdef _UP13_pwm_
  if(_pwm_P13)
  {
    _pwm_P13--;
    P13 = 1;
  }
  else
  {P13 = 0;}
  #endif
  #ifdef _UP14_pwm_
  if(_pwm_P14)
  {
    _pwm_P14--;
    P14 = 1;
  }
  else
  {P14 = 0;}
  #endif
  #ifdef _UP15_pwm_
  if(_pwm_P15)
  {
    _pwm_P15--;
    P15 = 1;
  }
  else
  {P15 = 0;}
  #endif
  #ifdef _UP16_pwm_
  if(_pwm_P16)
  {
    _pwm_P16--;
    P16 = 1;
  }
  else
  {P16 = 0;}
  #endif
  #ifdef _UP17_pwm_
  if(_pwm_P17)
  {
    _pwm_P17--;
    P17 = 1;
  }
  else
  {P17 = 0;}
  #endif
  #ifdef _UP20_pwm_
  if(_pwm_P20)
  {
    _pwm_P20--;
    P20 = 1;
  }
  else
  {P20 = 0;}
  #endif
  #ifdef _UP21_pwm_
  if(_pwm_P21)
  {
    _pwm_P21--;
    P21 = 1;
  }
  else
  {P21 = 0;}
  #endif
  #ifdef _UP22_pwm_
  if(_pwm_P22)
  {
    _pwm_P22--;
    P22 = 1;
  }
  else
  {P22 = 0;}
  #endif
  #ifdef _UP23_pwm_
  if(_pwm_P23)
  {
    _pwm_P23--;
    P23 = 1;
  }
  else
  {P23 = 0;}
  #endif
  #ifdef _UP24_pwm_
  if(_pwm_P24)
  {
    _pwm_P24--;
    P24 = 1;
  }
  else
  {P24 = 0;}
  #endif
  #ifdef _UP25_pwm_
  if(_pwm_P25)
  {
    _pwm_P25--;
    P25 = 1;
  }
  else
  {P25 = 0;}
  #endif
  #ifdef _UP26_pwm_
  if(_pwm_P26)
  {
    _pwm_P26--;
    P26 = 1;
  }
  else
  {P26 = 0;}
  #endif
  #ifdef _UP27_pwm_
  if(_pwm_P27)
  {
    _pwm_P27--;
    P27 = 1;
  }
  else
  {P27 = 0;}
  #endif
  #ifdef _UP30_pwm_
  if(_pwm_P30)
  {
    _pwm_P30--;
    P30 = 1;
  }
  else
  {P30 = 0;}
  #endif
  #ifdef _UP31_pwm_
  if(_pwm_P31)
  {
    _pwm_P31--;
    P31 = 1;
  }
  else
  {P31 = 0;}
  #endif
  #ifdef _UP32_pwm_
  if(_pwm_P32)
  {
    _pwm_P32--;
    P32 = 1;
  }
  else
  {P32 = 0;}
  #endif
  #ifdef _UP33_pwm_
  if(_pwm_P33)
  {
    _pwm_P33--;
    P33 = 1;
  }
  else
  {P33 = 0;}
  #endif
  #ifdef _UP34_pwm_
  if(_pwm_P34)
  {
    _pwm_P34--;
    P34 = 1;
  }
  else
  {P34 = 0;}
  #endif
  #ifdef _UP35_pwm_
  if(_pwm_P35)
  {
    _pwm_P35--;
    P35 = 1;
  }
  else
  {P35 = 0;}
  #endif
  #ifdef _UP36_pwm_
  if(_pwm_P36)
  {
    _pwm_P36--;
    P36 = 1;
  }
  else
  {P36 = 0;}
  #endif
  #ifdef _UP37_pwm_
  if(_pwm_P37)
  {
    _pwm_P37--;
    P37 = 1;
  }
  else
  {P37 = 0;}
  #endif
  #ifdef _UP40_pwm_
  if(_pwm_P40)
  {
    _pwm_P40--;
    P40 = 1;
  }
  else
  {P40 = 0;}
  #endif
  #ifdef _UP41_pwm_
  if(_pwm_P41)
  {
    _pwm_P41--;
    P41 = 1;
  }
  else
  {P41 = 0;}
  #endif
  #ifdef _UP42_pwm_
  if(_pwm_P42)
  {
    _pwm_P42--;
    P42 = 1;
  }
  else
  {P42 = 0;}
  #endif
  #ifdef _UP43_pwm_
  if(_pwm_P43)
  {
    _pwm_P43--;
    P43 = 1;
  }
  else
  {P43 = 0;}
  #endif
  #ifdef _UP44_pwm_
  if(_pwm_P44)
  {
    _pwm_P44--;
    P44 = 1;
  }
  else
  {P44 = 0;}
  #endif
  #ifdef _UP45_pwm_
  if(_pwm_P45)
  {
    _pwm_P45--;
    P45 = 1;
  }
  else
  {P45 = 0;}
  #endif
  #ifdef _UP46_pwm_
  if(_pwm_P46)
  {
    _pwm_P46--;
    P46 = 1;
  }
  else
  {P46 = 0;}
  #endif
  #ifdef _UP47_pwm_
  if(_pwm_P47)
  {
    _pwm_P47--;
    P47 = 1;
  }
  else
  {P47 = 0;}
  #endif
  #ifdef _UP50_pwm_
  if(_pwm_P50)
  {
    _pwm_P50--;
    P50 = 1;
  }
  else
  {P50 = 0;}
  #endif
  #ifdef _UP51_pwm_
  if(_pwm_P51)
  {
    _pwm_P51--;
    P51 = 1;
  }
  else
  {P51 = 0;}
  #endif
  #ifdef _UP52_pwm_
  if(_pwm_P52)
  {
    _pwm_P52--;
    P52 = 1;
  }
  else
  {P52 = 0;}
  #endif
  #ifdef _UP53_pwm_
  if(_pwm_P53)
  {
    _pwm_P53--;
    P53 = 1;
  }
  else
  {P53 = 0;}
  #endif
  #ifdef _UP54_pwm_
  if(_pwm_P54)
  {
    _pwm_P54--;
    P54 = 1;
  }
  else
  {P54 = 0;}
  #endif
  #ifdef _UP55_pwm_
  if(_pwm_P55)
  {
    _pwm_P55--;
    P55 = 1;
  }
  else
  {P55 = 0;}
  #endif
  #ifdef _UP56_pwm_
  if(_pwm_P56)
  {
    _pwm_P56--;
    P56 = 1;
  }
  else
  {P56 = 0;}
  #endif
  #ifdef _UP57_pwm_
  if(_pwm_P57)
  {
    _pwm_P57--;
    P57 = 1;
  }
  else
  {P57 = 0;}
  #endif
  #ifdef _UP60_pwm_
  if(_pwm_P60)
  {
    _pwm_P60--;
    P60 = 1;
  }
  else
  {P60 = 0;}
  #endif
  #ifdef _UP61_pwm_
  if(_pwm_P61)
  {
    _pwm_P61--;
    P61 = 1;
  }
  else
  {P61 = 0;}
  #endif
  #ifdef _UP62_pwm_
  if(_pwm_P62)
  {
    _pwm_P62--;
    P62 = 1;
  }
  else
  {P62 = 0;}
  #endif
  #ifdef _UP63_pwm_
  if(_pwm_P63)
  {
    _pwm_P63--;
    P63 = 1;
  }
  else
  {P63 = 0;}
  #endif
  #ifdef _UP64_pwm_
  if(_pwm_P64)
  {
    _pwm_P64--;
    P64 = 1;
  }
  else
  {P64 = 0;}
  #endif
  #ifdef _UP65_pwm_
  if(_pwm_P65)
  {
    _pwm_P65--;
    P65 = 1;
  }
  else
  {P65 = 0;}
  #endif
  #ifdef _UP66_pwm_
  if(_pwm_P66)
  {
    _pwm_P66--;
    P66 = 1;
  }
  else
  {P66 = 0;}
  #endif
  #ifdef _UP67_pwm_
  if(_pwm_P67)
  {
    _pwm_P67--;
    P67 = 1;
  }
  else
  {P67 = 0;}
  #endif
  #ifdef _UP70_pwm_
  if(_pwm_P70)
  {
    _pwm_P70--;
    P70 = 1;
  }
  else
  {P70 = 0;}
  #endif
  #ifdef _UP71_pwm_
  if(_pwm_P71)
  {
    _pwm_P71--;
    P71 = 1;
  }
  else
  {P71 = 0;}
  #endif
  #ifdef _UP72_pwm_
  if(_pwm_P72)
  {
    _pwm_P72--;
    P72 = 1;
  }
  else
  {P72 = 0;}
  #endif
  #ifdef _UP73_pwm_
  if(_pwm_P73)
  {
    _pwm_P73--;
    P73 = 1;
  }
  else
  {P73 = 0;}
  #endif
  #ifdef _UP74_pwm_
  if(_pwm_P74)
  {
    _pwm_P74--;
    P74 = 1;
  }
  else
  {P74 = 0;}
  #endif
  #ifdef _UP75_pwm_
  if(_pwm_P75)
  {
    _pwm_P75--;
    P75 = 1;
  }
  else
  {P75 = 0;}
  #endif
  #ifdef _UP76_pwm_
  if(_pwm_P76)
  {
    _pwm_P76--;
    P76 = 1;
  }
  else
  {P76 = 0;}
  #endif
  #ifdef _UP77_pwm_
  if(_pwm_P77)
  {
    _pwm_P77--;
    P77 = 1;
  }
  else
  {P77 = 0;}
  #endif
}
//======================================

//===========自定义延迟函数=============
#ifndef _ban_Udelay_func
u8 _delay = 0;
void _UPS_delay() interrupt 3
{
	TL1 = 0x13;
	TH1 = 0x88;
	_delay++;
}

void Udelay(int times)
{
	u8 delay_pre = _delay;
	TL1 = 0x13;
	TH1 = 0x88;
	TR1 = 1;
	ET1 = 1;
	while(times)
	{
		if(delay_pre != _delay)
		{
			delay_pre = _delay;
			times--;
		}
	}
	TR1 = 0;
	ET1 = 0;
}
#endif
//=============================


//======P00=============
#ifdef _UP00_
void P00_d_w(u8 value)
{
	P00 = value;
}
u8 P00_d_r()
{
	return P00;
}
Uport xdata UP00 = {P00_d_w , P00_d_r , 0};
#endif 
//=====================
#ifdef _UP01_
void P01_d_w(u8 value)
{
  P01 = value;        
}
u8 P01_d_r()
{
  return P01;
}
Uport xdata UP01 = {P01_d_w , P01_d_r , 0};
#endif

#ifdef _UP02_
void P02_d_w(u8 value)
{
  P02 = value;
}
u8 P02_d_r()
{
  return P02;
}
Uport xdata UP02 = {P02_d_w , P02_d_r , 0};
#endif

#ifdef _UP03_
void P03_d_w(u8 value)
{
  P03 = value;
}
u8 P03_d_r()
{
  return P03;
}
Uport xdata UP03 = {P03_d_w , P03_d_r , 0};
#endif

#ifdef _UP04_
void P04_d_w(u8 value)
{
  P04 = value;
}
u8 P04_d_r()
{
  return P04;
}
Uport xdata UP04 = {P04_d_w , P04_d_r , 0};
#endif

#ifdef _UP05_
void P05_d_w(u8 value)
{
  P05 = value;
}
u8 P05_d_r()
{
  return P05;
}
Uport xdata UP05 = {P05_d_w , P05_d_r , 0};
#endif

#ifdef _UP06_
void P06_d_w(u8 value)
{
  P06 = value;
}
u8 P06_d_r()
{
  return P06;
}
Uport xdata UP06 = {P06_d_w , P06_d_r , 0};
#endif

#ifdef _UP07_
void P07_d_w(u8 value)
{
  P07 = value;
}
u8 P07_d_r()
{
  return P07;
}
Uport xdata UP07 = {P07_d_w , P07_d_r , 0};
#endif

#ifdef _UP10_
void P10_d_w(u8 value)
{
  P10 = value;
}
u8 P10_d_r()
{
  return P10;
}
Uport xdata UP10 = {P10_d_w , P10_d_r , 0};
#endif

#ifdef _UP11_
void P11_d_w(u8 value)
{
  P11 = value;
}
u8 P11_d_r()
{
  return P11;
}
Uport xdata UP11 = {P11_d_w , P11_d_r , 0};
#endif

#ifdef _UP12_
void P12_d_w(u8 value)
{
  P12 = value;
}
u8 P12_d_r()
{
  return P12;
}
Uport xdata UP12 = {P12_d_w , P12_d_r , 0};
#endif

#ifdef _UP13_
void P13_d_w(u8 value)
{
  P13 = value;
}
u8 P13_d_r()
{
  return P13;
}
Uport xdata UP13 = {P13_d_w , P13_d_r , 0};
#endif

#ifdef _UP14_
void P14_d_w(u8 value)
{
  P14 = value;
}
u8 P14_d_r()
{
  return P14;
}
Uport xdata UP14 = {P14_d_w , P14_d_r , 0};
#endif

#ifdef _UP15_
void P15_d_w(u8 value)
{
  P15 = value;
}
u8 P15_d_r()
{
  return P15;
}
Uport xdata UP15 = {P15_d_w , P15_d_r , 0};
#endif

#ifdef _UP16_
void P16_d_w(u8 value)
{
  P16 = value;
}
u8 P16_d_r()
{
  return P16;
}
Uport xdata UP16 = {P16_d_w , P16_d_r , 0};
#endif

#ifdef _UP17_
void P17_d_w(u8 value)
{
  P17 = value;
}
u8 P17_d_r()
{
  return P17;
}
Uport xdata UP17 = {P17_d_w , P17_d_r , 0};
#endif

#ifdef _UP20_
void P20_d_w(u8 value)
{
  P20 = value;
}
u8 P20_d_r()
{
  return P20;
}
Uport xdata UP20 = {P20_d_w , P20_d_r , 0};
#endif

#ifdef _UP21_
void P21_d_w(u8 value)
{
  P21 = value;
}
u8 P21_d_r()
{
  return P21;
}
Uport xdata UP21 = {P21_d_w , P21_d_r , 0};
#endif

#ifdef _UP22_
void P22_d_w(u8 value)
{
  P22 = value;
}
u8 P22_d_r()
{
  return P22;
}
Uport xdata UP22 = {P22_d_w , P22_d_r , 0};
#endif

#ifdef _UP23_
void P23_d_w(u8 value)
{
  P23 = value;
}
u8 P23_d_r()
{
  return P23;
}
Uport xdata UP23 = {P23_d_w , P23_d_r , 0};
#endif

#ifdef _UP24_
void P24_d_w(u8 value)
{
  P24 = value;
}
u8 P24_d_r()
{
  return P24;
}
Uport xdata UP24 = {P24_d_w , P24_d_r , 0};
#endif

#ifdef _UP25_
void P25_d_w(u8 value)
{
  P25 = value;
}
u8 P25_d_r()
{
  return P25;
}
Uport xdata UP25 = {P25_d_w , P25_d_r , 0};
#endif

#ifdef _UP26_
void P26_d_w(u8 value)
{
  P26 = value;
}
u8 P26_d_r()
{
  return P26;
}
Uport xdata UP26 = {P26_d_w , P26_d_r , 0};
#endif

#ifdef _UP27_
void P27_d_w(u8 value)
{
  P27 = value;
}
u8 P27_d_r()
{
  return P27;
}
Uport xdata UP27 = {P27_d_w , P27_d_r , 0};
#endif

#ifdef _UP30_
void P30_d_w(u8 value)
{
  P30 = value;
}
u8 P30_d_r()
{
  return P30;
}
Uport xdata UP30 = {P30_d_w , P30_d_r , 0};
#endif

#ifdef _UP31_
void P31_d_w(u8 value)
{
  P31 = value;
}
u8 P31_d_r()
{
  return P31;
}
Uport xdata UP31 = {P31_d_w , P31_d_r , 0};
#endif

#ifdef _UP32_
void P32_d_w(u8 value)
{
  P32 = value;
}
u8 P32_d_r()
{
  return P32;
}
Uport xdata UP32 = {P32_d_w , P32_d_r , 0};
#endif

#ifdef _UP33_
void P33_d_w(u8 value)
{
  P33 = value;
}
u8 P33_d_r()
{
  return P33;
}
Uport xdata UP33 = {P33_d_w , P33_d_r , 0};
#endif

#ifdef _UP34_
void P34_d_w(u8 value)
{
  P34 = value;
}
u8 P34_d_r()
{
  return P34;
}
Uport xdata UP34 = {P34_d_w , P34_d_r , 0};
#endif

#ifdef _UP35_
void P35_d_w(u8 value)
{
  P35 = value;
}
u8 P35_d_r()
{
  return P35;
}
Uport xdata UP35 = {P35_d_w , P35_d_r , 0};
#endif

#ifdef _UP36_
void P36_d_w(u8 value)
{
  P36 = value;
}
u8 P36_d_r()
{
  return P36;
}
Uport xdata UP36 = {P36_d_w , P36_d_r , 0};
#endif

#ifdef _UP37_
void P37_d_w(u8 value)
{
  P37 = value;
}
u8 P37_d_r()
{
  return P37;
}
Uport xdata UP37 = {P37_d_w , P37_d_r , 0};
#endif

#ifdef _UP40_
void P40_d_w(u8 value)
{
  P40 = value;
}
u8 P40_d_r()
{
  return P40;
}
Uport xdata UP40 = {P40_d_w , P40_d_r , 0};
#endif

#ifdef _UP41_
void P41_d_w(u8 value)
{
  P41 = value;
}
u8 P41_d_r()
{
  return P41;
}
Uport xdata UP41 = {P41_d_w , P41_d_r , 0};
#endif

#ifdef _UP42_
void P42_d_w(u8 value)
{
  P42 = value;
}
u8 P42_d_r()
{
  return P42;
}
Uport xdata UP42 = {P42_d_w , P42_d_r , 0};
#endif

#ifdef _UP43_
void P43_d_w(u8 value)
{
  P43 = value;
}
u8 P43_d_r()
{
  return P43;
}
Uport xdata UP43 = {P43_d_w , P43_d_r , 0};
#endif

#ifdef _UP44_
void P44_d_w(u8 value)
{
  P44 = value;
}
u8 P44_d_r()
{
  return P44;
}
Uport xdata UP44 = {P44_d_w , P44_d_r , 0};
#endif

#ifdef _UP45_
void P45_d_w(u8 value)
{
  P45 = value;
}
u8 P45_d_r()
{
  return P45;
}
Uport xdata UP45 = {P45_d_w , P45_d_r , 0};
#endif

#ifdef _UP46_
void P46_d_w(u8 value)
{
  P46 = value;
}
u8 P46_d_r()
{
  return P46;
}
Uport xdata UP46 = {P46_d_w , P46_d_r , 0};
#endif

#ifdef _UP47_
void P47_d_w(u8 value)
{
  P47 = value;
}
u8 P47_d_r()
{
  return P47;
}
Uport xdata UP47 = {P47_d_w , P47_d_r , 0};
#endif

#ifdef _UP50_
void P50_d_w(u8 value)
{
  P50 = value;
}
u8 P50_d_r()
{
  return P50;
}
Uport xdata UP50 = {P50_d_w , P50_d_r , 0};
#endif

#ifdef _UP51_
void P51_d_w(u8 value)
{
  P51 = value;
}
u8 P51_d_r()
{
  return P51;
}
Uport xdata UP51 = {P51_d_w , P51_d_r , 0};
#endif

#ifdef _UP52_
void P52_d_w(u8 value)
{
  P52 = value;
}
u8 P52_d_r()
{
  return P52;
}
Uport xdata UP52 = {P52_d_w , P52_d_r , 0};
#endif

#ifdef _UP53_
void P53_d_w(u8 value)
{
  P53 = value;
}
u8 P53_d_r()
{
  return P53;
}
Uport xdata UP53 = {P53_d_w , P53_d_r , 0};
#endif

#ifdef _UP54_
void P54_d_w(u8 value)
{
  P54 = value;
}
u8 P54_d_r()
{
  return P54;
}
Uport xdata UP54 = {P54_d_w , P54_d_r , 0};
#endif

#ifdef _UP55_
void P55_d_w(u8 value)
{
  P55 = value;
}
u8 P55_d_r()
{
  return P55;
}
Uport xdata UP55 = {P55_d_w , P55_d_r , 0};
#endif

#ifdef _UP56_
void P56_d_w(u8 value)
{
  P56 = value;
}
u8 P56_d_r()
{
  return P56;
}
Uport xdata UP56 = {P56_d_w , P56_d_r , 0};
#endif

#ifdef _UP57_
void P57_d_w(u8 value)
{
  P57 = value;
}
u8 P57_d_r()
{
  return P57;
}
Uport xdata UP57 = {P57_d_w , P57_d_r , 0};
#endif

#ifdef _UP60_
void P60_d_w(u8 value)
{
  P60 = value;
}
u8 P60_d_r()
{
  return P60;
}
Uport xdata UP60 = {P60_d_w , P60_d_r , 0};
#endif

#ifdef _UP61_
void P61_d_w(u8 value)
{
  P61 = value;
}
u8 P61_d_r()
{
  return P61;
}
Uport xdata UP61 = {P61_d_w , P61_d_r , 0};
#endif

#ifdef _UP62_
void P62_d_w(u8 value)
{
  P62 = value;
}
u8 P62_d_r()
{
  return P62;
}
Uport xdata UP62 = {P62_d_w , P62_d_r , 0};
#endif

#ifdef _UP63_
void P63_d_w(u8 value)
{
  P63 = value;
}
u8 P63_d_r()
{
  return P63;
}
Uport xdata UP63 = {P63_d_w , P63_d_r , 0};
#endif

#ifdef _UP64_
void P64_d_w(u8 value)
{
  P64 = value;
}
u8 P64_d_r()
{
  return P64;
}
Uport xdata UP64 = {P64_d_w , P64_d_r , 0};
#endif

#ifdef _UP65_
void P65_d_w(u8 value)
{
  P65 = value;
}
u8 P65_d_r()
{
  return P65;
}
Uport xdata UP65 = {P65_d_w , P65_d_r , 0};
#endif

#ifdef _UP66_
void P66_d_w(u8 value)
{
  P66 = value;
}
u8 P66_d_r()
{
  return P66;
}
Uport xdata UP66 = {P66_d_w , P66_d_r , 0};
#endif

#ifdef _UP67_
void P67_d_w(u8 value)
{
  P67 = value;
}
u8 P67_d_r()
{
  return P67;
}
Uport xdata UP67 = {P67_d_w , P67_d_r , 0};
#endif

#ifdef _UP70_
void P70_d_w(u8 value)
{
  P70 = value;
}
u8 P70_d_r()
{
  return P70;
}
Uport xdata UP70 = {P70_d_w , P70_d_r , 0};
#endif

#ifdef _UP71_
void P71_d_w(u8 value)
{
  P71 = value;
}
u8 P71_d_r()
{
  return P71;
}
Uport xdata UP71 = {P71_d_w , P71_d_r , 0};
#endif

#ifdef _UP72_
void P72_d_w(u8 value)
{
  P72 = value;
}
u8 P72_d_r()
{
  return P72;
}
Uport xdata UP72 = {P72_d_w , P72_d_r , 0};
#endif

#ifdef _UP73_
void P73_d_w(u8 value)
{
  P73 = value;
}
u8 P73_d_r()
{
  return P73;
}
Uport xdata UP73 = {P73_d_w , P73_d_r , 0};
#endif

#ifdef _UP74_
void P74_d_w(u8 value)
{
  P74 = value;
}
u8 P74_d_r()
{
  return P74;
}
Uport xdata UP74 = {P74_d_w , P74_d_r , 0};
#endif

#ifdef _UP75_
void P75_d_w(u8 value)
{
  P75 = value;
}
u8 P75_d_r()
{
  return P75;
}
Uport xdata UP75 = {P75_d_w , P75_d_r , 0};
#endif

#ifdef _UP76_
void P76_d_w(u8 value)
{
  P76 = value;
}
u8 P76_d_r()
{
  return P76;
}
Uport xdata UP76 = {P76_d_w , P76_d_r , 0};
#endif

#ifdef _UP77_
void P77_d_w(u8 value)
{
  P77 = value;
}
u8 P77_d_r()
{
  return P77;
}
Uport xdata UP77 = {P77_d_w , P77_d_r , 0};
#endif

