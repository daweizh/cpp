# Chap03. 需要了解的


## 2.3 保留字

|一|二|三|
|---|---|---|
|alignas        |export             |sizeof|
|alignof        |extern             |static|
|asm            |false              |static_assert|
|auto           |float              |static_cast|
|bool           |for                |struct|
|break          |friend             |switch|
|case           |goto               |template|
|catch          |if                 |this|
|char           |inline             |thread_local|
|char16_t       |int                |throw|
|char32_t       |long               |true|
|class          |mutable            |try|
|const          |namespace          |typedef|
|constexpr      |new                |typeid|
|const_cast     |noexcept           |typename|
|continue       |nullptr            |union|
|decltype       |operator           |unsigned|
|default        |private            |using|
|delete         |protected          |virtual|
|do             |public             |void|
|double         |register           |volatile|
|dynamic_cast   |reinterpret_cast   |wchar_t|
|else           |return             |while|
|enum           |short              ||
|explicit       |signed             ||


## 2.6 printf

C++程序需要通过I/O库函数与外界通信、交流。
`int printf(const char *format,...)`发送格式化输出到标准输出`stdout`。
如果成功，则返回写入的字符总数，否则返回一个负数。

`printf()`函数的调用格式为：

    printf("<格式化字符串>",<参量表>);



`format`的格式是`%[flags][width][.precision][length]specifier`。

**1.specifier**

|specifier(格式字符)|意义|
|---|---|
|d   |以十进制形式输出带符号整数(正数不输出符号)
|o   |以八进制形式输出无符号整数(不输出前缀0)
|x,X |以十六进制形式输出无符号整数(不输出前缀Ox)
|u   |以十进制形式输出无符号整数
|f   |以小数形式输出单、双精度实数
|e,E |以指数形式输出单、双精度实数
|g,G |以%f或%e中较短的输出宽度输出单、双精度实数
|c   |输出单个字符
|s   |输出字符串
|p   |输出指针地址
|lu  |32位无符号整数
|llu |64位无符号整数

**2.length**

|length(长度)|描述
|---|---|
|h|参数被解释为短整型或无符号短整型（仅适用于整数说明符：i、d、o、u、x 和 X）。
|l|参数被解释为长整型或无符号长整型，适用于整数说明符（i、d、o、u、x 和 X）及说明符 c（表示一个宽字符）和 s（表示宽字符字符串）。
|L|参数被解释为长双精度型（仅适用于浮点数说明符：e、E、f、g 和 G）。

**3.precision**

|.precision（精度） |描述
|---|---|
|.number    |对于整数说明符（d、i、o、u、x、X）：precision 指定了要写入的数字的最小位数。如果写入的值短于该数，结果会用前导零来填充。如果写入的值长于该数，结果不会被截断。精度为 0 意味着不写入任何字符。
||对于 e、E 和 f 说明符：要在小数点后输出的小数位数。
||对于 g 和 G 说明符：要输出的最大有效位数。
||对于 s: 要输出的最大字符数。默认情况下，所有字符都会被输出，直到遇到末尾的空字符。
||对于 c 类型：没有任何影响。
||当未指定任何精度时，默认为 1。如果指定时不带有一个显式值，则假定为 0。
|.* |精度在 format 字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。

**4.width**

|width（宽度）  |描述
|---|---|
|(number)   |要输出的字符的最小数目。如果输出的值短于该数，结果会用空格填充。如果输出的值长于该数，结果不会被截断。
|*  |宽度在format字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。


**5.flags**

|flags（标识）  |描述
|---|---|
|-  |在给定的字段宽度内左对齐，默认是右对齐（参见 width 子说明符）。
|+  |强制在结果之前显示加号或减号（+ 或 -），即正数前面会显示 + 号。默认情况下，只有负数前面会显示一个 - 号。
|空格 |如果没有写入任何符号，则在该值前面插入一个空格。
|#  |与 o、x 或 X 说明符一起使用时，非零值前面会分别显示 0、0x 或 0X。
||与 e、E 和 f 一起使用时，会强制输出包含一个小数点，即使后边没有数字时也会显示小数点。默认情况下，如果后边没有数字时候，不会显示显示小数点。
||与 g 或 G 一起使用时，结果与使用 e 或 E 时相同，但是尾部的零不会被移除。
|0  |在指定填充 padding 的数字左边放置零（0），而不是空格（参见 width 子说明符）。

测试代码

~~~cpp
#include<stdio.h>
#include<string.h>

int main(){
    char c, s[20];
    int a=1234;
    float f=3.141592653589;
    double x=0.12345678987654321;
    strcpy(s , "Hello,Comrade");
    c='\x41';
    
    printf("a=%d\n",a);       /*结果输出十进制整数a=1234*/
    printf("a=%6d\n",a);      /*结果输出6位十进制数a=1234*/
    printf("a=%06d\n",a);     /*结果输出6位十进制数a=001234*/
    printf("a=%2d\n",a);      /*a超过2位,按实际值输出a=1234*/
    printf("f=%f\n",f);       /*输出浮点数f=3.141593*/
    printf("f=%6.4f\n",f);    /*输出6位其中小数点后4位的浮点数f=3.1416*/
    printf("x=%lf\n",x);      /*输出长浮点数x=0.123457*/
    printf("x=%18.16lf\n",x); /*输出18位其中小数点后16位的长浮点数x=0.1234567898765432*/
    printf("c=%c\n",c);       /*输出字符c=A*/
    printf("c=%x\n",c);       /*输出字符的ASCII码值c=41*/
    printf("s[]=%s\n",s);     /*输出数组字符串s[]=Hello,Comrade*/
    printf("s[]=%6.9s\n",s);  /*输出最多9个字符的字符串s[]=Hello,Co*/
    printf("s=%p\n",s);       /*输出数组字符串首字符地址s=FFBE*/

    return 0;
}

~~~

## 2.8 转义字符

所有的ASCII码都可以用“\”加数字（一般是8进制数字）来表示。
而C++中定义了一些字母前加"\\"来表示常见的那些不能显示的ASCII字符，如\0,\t,\n等，
就称为转义字符，因为后面的字符，都不是它本来的ASCII字符意思了。

|转义字符 |意义|ASCII码值（十进制）
|---|---|---|
|\a|响铃(BEL)|007
|\b|退格(BS) ，将当前位置移到前一列|008
|\f|换页(FF)，将当前位置移到下页开头|012
|\n|换行(LF) ，将当前位置移到下一行开头|010
|\r|回车(CR) ，将当前位置移到本行开头|013
|\t|水平制表(HT) （跳到下一个TAB位置）|009
|\v|垂直制表(VT)|011
|\\\\   |代表一个反斜线字符'\\'|092
|\\'|代表一个单引号（撇号）字符|039
|\\"|代表一个双引号字符|034
|\?|代表一个问号  |063
|\0|空字符(NULL)|000
|\ddd|1到3位八进制数所代表的任意字符|三位八进制
|\xhh|1到2位十六进制所代表的任意字符|二位十六进制



头文件是C++程序对其他程序的引用。
格式为：`#include <引用文件名>`或`#include "引用文件名"`。

采用名字空间是为了在C++新标准中，解决多人同时编写大型程序时名字产生冲突问题。

`using namespace std` 表示这个程序采用的全部都是std（标准）名字空间。



2. 计算机存储数据的基本单位是（ ）。
 A. bit（一个数据位）	 B. Byte（存储基本单位）	 C. GB	 D. KB

1GB = 1024MB = 1024 x 1024B = 1024 x 1024 x 8bit 

1GB = 1024MB
1MB = 1024KB
1KB = 1024B
1B = 8bit

3. 	下列协议中与电子邮件无关的是（ ）。
 A. POP3(邮局协议)	 B. SMTP（邮递员）	 C. WTO（世界贸易组织）	 D. IMAP（互联网邮件协议）

18. 从（ ）年开始，NOIP竞赛将不再支持Pascal语言。
 A. 2020	 B. 2021	 C. 2022（2017+5）	 D. 2023

20. 以下和计算机领域密切相关的奖项是（ ）。
 A. 奥斯卡奖(电影)	 B. 图灵奖（计算机）	 C. 诺贝尔奖（科学大奖）	 D. 普利策奖（新闻）
