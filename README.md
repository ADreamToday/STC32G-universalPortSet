# STC32G-universalPortSet
（随手写的readme）
将stc32G12k128的60个io口的pwm和数字输出全部抽象成结构体，这样就可以将“io口”当变量传入自定义函数（建议传地址）
（一下的xx代表一个两位数，你懂的）
数字输入输出使用方法： UPxx.digitalWrite(value);  [input =]UPxx.digitalRead();
pwm输出则写成了成员变量 ：UPxx.pwm_value = value;
(当然，使用前需要自己设置端口输出模式)
-----------------
在head文件中有60个io的宏定义
_UPxx_是数字输入输出和UPxx这个变量的定义
_UPxx_pwm_是pwm输出的定义，在define了这个之后，该io将采用pwm的输出方式（且只能pwm）
-----------------------
什么？你要pwm输入？
什么？你嫌中断函数效率低？
什么？你还要更多功能？
nmd等我更新谢谢
