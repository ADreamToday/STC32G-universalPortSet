# STC32G-universalPortSet
<br>
请看超级简简简的教程↓<br>
【如何使用我写的UniversalPortSet库】<br> 
[B站视频链接](https://www.bilibili.com/video/BV1gb411f7se/?share_source=copy_web&vd_source=11b2c530b05a67e16cc889f26e428cdd)<br>
<br><br>
（随手写的readme）<br>
将stc32G12k128的60个io口的pwm和数字输出全部抽象成结构体，这样就可以将“io口”当变量传入自定义函数（建议传地址）<br>
（一下的xx代表一个两位数，你懂的）<br>
数字输入输出使用方法： <br>
UPxx.digitalWrite(value); <br>
[input =]UPxx.digitalRead();<br>
pwm输出则写成了成员变量 ：<br>
UPxx.pwm_value = value;<br>
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
<br>
<br>
（对了，pwm的频率和Udelay的延时时间记得自己调一调，分别使用了定时器0和1实现的，pwm的定时器0采用自动重载<s>，……懒得写了，等会儿再写</s>，Udelay可以禁用，如果你不喜欢的话）<br>
main.c是一个模板，你可以直接用那个写

