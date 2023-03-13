#ifndef _u8_
	#define _u8_
	#define u8 unsigned char
#endif
	
//#define _ban_Udelay_func		//用来禁用定义的延时函数

//说明
//#define _UPxx_			使用这样的宏定义来启用某个端口的统一定义功能
//#define _UPxx_pwm_	使用这种定义来开启pwm功能(单向输出)
	
extern void UPS_init();

//设置pwm最小周期
#define _pwm_H8_ 0xff
#define _pwm_L8_ 0xcc

//================启用U端口=============
//#define _UP00_    
//#define _UP00_pwm_

//#define _UP01_    
//#define _UP01_pwm_

//#define _UP02_    
//#define _UP02_pwm_

//#define _UP03_    
//#define _UP03_pwm_

//#define _UP04_    
//#define _UP04_pwm_

//#define _UP05_    
//#define _UP05_pwm_

//#define _UP06_    
//#define _UP06_pwm_

//#define _UP07_
//#define _UP07_pwm_

//#define _UP10_
//#define _UP10_pwm_

//#define _UP11_
//#define _UP11_pwm_

//#define _UP12_
//#define _UP12_pwm_

//#define _UP13_
//#define _UP13_pwm_

//#define _UP14_
//#define _UP14_pwm_

//#define _UP15_
//#define _UP15_pwm_

//#define _UP16_
//#define _UP16_pwm_

//#define _UP17_
//#define _UP17_pwm_

//#define _UP20_
//#define _UP20_pwm_

//#define _UP21_
//#define _UP21_pwm_

//#define _UP22_
//#define _UP22_pwm_

//#define _UP23_
//#define _UP23_pwm_

//#define _UP24_
//#define _UP24_pwm_

//#define _UP25_
//#define _UP25_pwm_

//#define _UP26_
//#define _UP26_pwm_

//#define _UP27_
//#define _UP27_pwm_

//#define _UP30_
//#define _UP30_pwm_

//#define _UP31_
//#define _UP31_pwm_

//#define _UP32_
//#define _UP32_pwm_

//#define _UP33_
//#define _UP33_pwm_

//#define _UP34_
//#define _UP34_pwm_

//#define _UP35_
//#define _UP35_pwm_

//#define _UP36_
//#define _UP36_pwm_

//#define _UP37_
//#define _UP37_pwm_

//#define _UP40_
//#define _UP40_pwm_

//#define _UP41_
//#define _UP41_pwm_

//#define _UP42_
//#define _UP42_pwm_

//#define _UP43_
//#define _UP43_pwm_

//#define _UP44_
//#define _UP44_pwm_

//#define _UP45_
//#define _UP45_pwm_

//#define _UP46_
//#define _UP46_pwm_

//#define _UP47_
//#define _UP47_pwm_

//#define _UP50_
//#define _UP50_pwm_

//#define _UP51_
//#define _UP51_pwm_

//#define _UP52_
//#define _UP52_pwm_

//#define _UP53_
//#define _UP53_pwm_

//#define _UP54_
//#define _UP54_pwm_

//#define _UP55_
//#define _UP55_pwm_

//#define _UP56_
//#define _UP56_pwm_

//#define _UP57_
//#define _UP57_pwm_

//#define _UP60_
//#define _UP60_pwm_

//#define _UP61_
//#define _UP61_pwm_

//#define _UP62_
//#define _UP62_pwm_

//#define _UP63_
//#define _UP63_pwm_

//#define _UP64_
//#define _UP64_pwm_

//#define _UP65_
//#define _UP65_pwm_

//#define _UP66_
//#define _UP66_pwm_

//#define _UP67_
//#define _UP67_pwm_

//#define _UP70_
//#define _UP70_pwm_

//#define _UP71_
//#define _UP71_pwm_

//#define _UP72_
//#define _UP72_pwm_

//#define _UP73_
//#define _UP73_pwm_

//#define _UP74_
//#define _UP74_pwm_

//#define _UP75_
//#define _UP75_pwm_

//#define _UP76_
//#define _UP76_pwm_

//#define _UP77_
//#define _UP77_pwm_
//=====================================
	
	
	
typedef struct u_port_set
{
	void (*digitalWrite)(u8 value);
	u8 (*digitalRead)();
	u8 pwm_value;
}Uport;

#ifndef _ban_Udelay_func
extern void Udelay(int times);
#endif

//========外部变量声明==============
#ifdef _UP00_
extern Uport xdata UP00;
#endif

#ifdef _UP01_
extern Uport xdata UP01;
#endif

#ifdef _UP02_
extern Uport xdata UP02;
#endif

#ifdef _UP03_
extern Uport xdata UP03;
#endif

#ifdef _UP04_
extern Uport xdata UP04;
#endif

#ifdef _UP05_
extern Uport xdata UP05;
#endif

#ifdef _UP06_
extern Uport xdata UP06;
#endif

#ifdef _UP07_
extern Uport xdata UP07;
#endif

#ifdef _UP10_
extern Uport xdata UP10;
#endif

#ifdef _UP11_
extern Uport xdata UP11;
#endif

#ifdef _UP12_
extern Uport xdata UP12;
#endif

#ifdef _UP13_
extern Uport xdata UP13;
#endif

#ifdef _UP14_
extern Uport xdata UP14;
#endif

#ifdef _UP15_
extern Uport xdata UP15;
#endif

#ifdef _UP16_
extern Uport xdata UP16;
#endif

#ifdef _UP17_
extern Uport xdata UP17;
#endif

#ifdef _UP20_
extern Uport xdata UP20;
#endif

#ifdef _UP21_
extern Uport xdata UP21;
#endif

#ifdef _UP22_
extern Uport xdata UP22;
#endif

#ifdef _UP23_
extern Uport xdata UP23;
#endif

#ifdef _UP24_
extern Uport xdata UP24;
#endif

#ifdef _UP25_
extern Uport xdata UP25;
#endif

#ifdef _UP26_
extern Uport xdata UP26;
#endif

#ifdef _UP27_
extern Uport xdata UP27;
#endif

#ifdef _UP30_
extern Uport xdata UP30;
#endif

#ifdef _UP31_
extern Uport xdata UP31;
#endif

#ifdef _UP32_
extern Uport xdata UP32;
#endif

#ifdef _UP33_
extern Uport xdata UP33;
#endif

#ifdef _UP34_
extern Uport xdata UP34;
#endif

#ifdef _UP35_
extern Uport xdata UP35;
#endif

#ifdef _UP36_
extern Uport xdata UP36;
#endif

#ifdef _UP37_
extern Uport xdata UP37;
#endif

#ifdef _UP40_
extern Uport xdata UP40;
#endif

#ifdef _UP41_
extern Uport xdata UP41;
#endif

#ifdef _UP42_
extern Uport xdata UP42;
#endif

#ifdef _UP43_
extern Uport xdata UP43;
#endif

#ifdef _UP44_
extern Uport xdata UP44;
#endif

#ifdef _UP45_
extern Uport xdata UP45;
#endif

#ifdef _UP46_
extern Uport xdata UP46;
#endif

#ifdef _UP47_
extern Uport xdata UP47;
#endif

#ifdef _UP50_
extern Uport xdata UP50;
#endif

#ifdef _UP51_
extern Uport xdata UP51;
#endif

#ifdef _UP52_
extern Uport xdata UP52;
#endif

#ifdef _UP53_
extern Uport xdata UP53;
#endif

#ifdef _UP54_
extern Uport xdata UP54;
#endif

#ifdef _UP55_
extern Uport xdata UP55;
#endif

#ifdef _UP56_
extern Uport xdata UP56;
#endif

#ifdef _UP57_
extern Uport xdata UP57;
#endif

#ifdef _UP60_
extern Uport xdata UP60;
#endif

#ifdef _UP61_
extern Uport xdata UP61;
#endif

#ifdef _UP62_
extern Uport xdata UP62;
#endif

#ifdef _UP63_
extern Uport xdata UP63;
#endif

#ifdef _UP64_
extern Uport xdata UP64;
#endif

#ifdef _UP65_
extern Uport xdata UP65;
#endif

#ifdef _UP66_
extern Uport xdata UP66;
#endif

#ifdef _UP67_
extern Uport xdata UP67;
#endif

#ifdef _UP70_
extern Uport xdata UP70;
#endif

#ifdef _UP71_
extern Uport xdata UP71;
#endif

#ifdef _UP72_
extern Uport xdata UP72;
#endif

#ifdef _UP73_
extern Uport xdata UP73;
#endif

#ifdef _UP74_
extern Uport xdata UP74;
#endif

#ifdef _UP75_
extern Uport xdata UP75;
#endif

#ifdef _UP76_
extern Uport xdata UP76;
#endif

#ifdef _UP77_
extern Uport xdata UP77;
#endif
//===================================

