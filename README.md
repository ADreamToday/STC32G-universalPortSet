# STC32G-universalPortSet
（随手写的readme）<br>
将stc32G12k128的60个io口的pwm和数字输出全部抽象成结构体，这样就可以将“io口”当变量传入自定义函数（建议传地址）<br>
（一下的xx代表一个两位数，你懂的）<br>
数字输入输出使用方法： UPxx.digitalWrite(value);  [input =]UPxx.digitalRead();<br>
pwm输出则写成了成员变量 ：UPxx.pwm_value = value;<br>
(当然，使用前需要自己设置端口输出模式)<br>
-----------------
在head文件中有60个io的宏定义<br>
_UPxx_是数字输入输出和UPxx这个变量的定义<br>
_UPxx_pwm_是pwm输出的定义，在define了这个之后，该io将采用pwm的输出方式（且只能pwm）<br>
-----------------------
什么？你要pwm输入？<br>
什么？你嫌中断函数效率低？<br>
什么？你还要更多功能？<br>
nmd等我更新谢谢<br>
