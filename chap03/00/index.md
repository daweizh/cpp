# Chap02.需要了解的

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 


## 2.1 main

每个C++程序都包含一到多个函数，但必须有一个函数叫`main`，如下：

~~~cpp
int main(){

    return 0;
}
~~~

每个函数都包含四个部分：

1. 返回类型
2. 函数名
3. 圆括号括起来的参数列表（可以为空）
4. 花括号括起来的函数体

## 2.2 iostream

C++语言本身没有定义输入输出语句，需要包含额外的用于输入输出的`标准库`。
`iostream`是C++的一个标准库。
该文件定义了 cin、cout、cerr 和 clog 对象，
分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。

举例：

1. cin
    ~~~cpp
    #include <iostream>
    
    int main(){
        char str[200];
        
        std::cin >> str;
        std::cout << str << std::endl;
        
        return 0;
    } 
    ~~~
2. cout
    ~~~cpp
    #include <iostream>
    
    int main(){
        
        std::cout << "Example for cout." << std::endl;
        
        return 0;
    }
    ~~~
3. cerr
    ~~~cpp
    #include <iostream>
    
    int main(){
        
        std::cerr << "Example for cerr." << std::endl;
        
        return 0;
    }
    ~~~
4. clog
    ~~~cpp
    #include <iostream>
    
    int main(){
        
        std::clog << "Example for clog." << std::endl;
        
        return 0;
    }
    ~~~

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

## 2.4 namespace

为了区分相同的名字使用`namespace`，在不同的`namespace`中可以使用相同的名字。

可以用`using namespace std`声明后续代码使用`std`命名空间，如代码

~~~cpp
#include <iostream>

int main(){
    
    std::cout << "Example for cout." << std::endl;
    
    return 0;
}
~~~

中的`std`可以通过`using namespace std`省略掉。

~~~cpp
#include <iostream>
using namespace std;

int main(){
    
    cout << "Example for cout." << endl;
    
    return 0;
}
~~~

## 2.5 数据类型

C++语言本身提供了一系列基本的数据类型包括算术类型和特殊的`void`类型两大类。
算术类型又可以表示：字符，整数，布尔值和浮点数。
`void`类型不分配任何值。

C++的算术类型

|类型|含义|最小长度|十进制范围|十进制位数|
|---|---|---|---|---|
|bool       |布尔|未定义|未定义|1|
|char       |字符|8位|-128~127|3|
|wchar_t    |宽字符|16位|一个字符||
|char16_t   |Unicode字符|16位|一个字符||
|char32_t   |Unicode字符|32位|一个字符||
|short      |短整数|16位|-32768 到 32767|5|
|int        |整数|32位|-2147483648 到 2147483647|10|
|long       |长整型|32位|-2147483648 到 2147483647|10|
|long long  |长长整型|64位|-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807|19|
|float      |单精度浮点型|32位|+/- 3.4e +/- 38|38|
|double     |双精度浮点型|64位|+/- 1.7e +/- 308|308|
|long double|扩展精度浮点型|128位|+/- 1.2e +/- 4932|4932|

测试数据类型

~~~cpp
#include<iostream>  
#include<string>  
#include <limits>  
using namespace std;  
  
int main(){  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "bytes：" << sizeof(bool);  
    cout << "\tmax：" << (numeric_limits<bool>::max)();  
    cout << "\t\t\t\tmin：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "bytes：" << sizeof(char);  
    cout << "\tmax：" << (numeric_limits<char>::max)();  
    cout << "\t\t\t\tmin：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "bytes：" << sizeof(signed char);  
    cout << "\tmax：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t\t\tmin：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char:\t" << "bytes：" << sizeof(unsigned char);  
    cout << "\tmax：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t\t\tmin：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "bytes：" << sizeof(wchar_t);  
    cout << "\tmax：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t\tmin：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "bytes：" << sizeof(short);  
    cout << "\tmax：" << (numeric_limits<short>::max)();  
    cout << "\t\t\tmin：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "bytes：" << sizeof(int);  
    cout << "\tmax：" << (numeric_limits<int>::max)();  
    cout << "\t\t\tmin：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned int: \t" << "bytes：" << sizeof(unsigned);  
    cout << "\tmax：" << (numeric_limits<unsigned>::max)();  
    cout << "\t\t\tmin：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "bytes：" << sizeof(long);  
    cout << "\tmax：" << (numeric_limits<long>::max)();  
    cout << "\t\t\tmin：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "bytes：" << sizeof(unsigned long);  
    cout << "\tmax：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t\t\tmin：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "long long: \t" << "bytes：" << sizeof(long long);  
    cout << "\tmax：" << (numeric_limits<long long>::max)();  
    cout << "\tmin：" << (numeric_limits<long long>::min)() << endl;  
    cout << "double: \t" << "bytes：" << sizeof(double);  
    cout << "\tmax：" << (numeric_limits<double>::max)();  
    cout << "\t\tmin：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "bytes：" << sizeof(long double);  
    cout << "\tmax：" << (numeric_limits<long double>::max)();  
    cout << "\t\tmin：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "bytes：" << sizeof(float);  
    cout << "\tmax：" << (numeric_limits<float>::max)();  
    cout << "\t\tmin：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "bytes：" << sizeof(size_t);  
    cout << "\tmax：" << (numeric_limits<size_t>::max)();  
    cout << "\tmin：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "bytes：" << sizeof(string) ;  
    cout << "\tmax：" << (numeric_limits<string>::max)();
    cout << "\t\t\t\tmin：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}
~~~

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

|.precision（精度）	|描述
|---|---|
|.number	|对于整数说明符（d、i、o、u、x、X）：precision 指定了要写入的数字的最小位数。如果写入的值短于该数，结果会用前导零来填充。如果写入的值长于该数，结果不会被截断。精度为 0 意味着不写入任何字符。
||对于 e、E 和 f 说明符：要在小数点后输出的小数位数。
||对于 g 和 G 说明符：要输出的最大有效位数。
||对于 s: 要输出的最大字符数。默认情况下，所有字符都会被输出，直到遇到末尾的空字符。
||对于 c 类型：没有任何影响。
||当未指定任何精度时，默认为 1。如果指定时不带有一个显式值，则假定为 0。
|.*	|精度在 format 字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。

**4.width**

|width（宽度）	|描述
|---|---|
|(number)	|要输出的字符的最小数目。如果输出的值短于该数，结果会用空格填充。如果输出的值长于该数，结果不会被截断。
|*	|宽度在format字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。


**5.flags**

|flags（标识）	|描述
|---|---|
|-	|在给定的字段宽度内左对齐，默认是右对齐（参见 width 子说明符）。
|+	|强制在结果之前显示加号或减号（+ 或 -），即正数前面会显示 + 号。默认情况下，只有负数前面会显示一个 - 号。
|空格	|如果没有写入任何符号，则在该值前面插入一个空格。
|#	|与 o、x 或 X 说明符一起使用时，非零值前面会分别显示 0、0x 或 0X。
||与 e、E 和 f 一起使用时，会强制输出包含一个小数点，即使后边没有数字时也会显示小数点。默认情况下，如果后边没有数字时候，不会显示显示小数点。
||与 g 或 G 一起使用时，结果与使用 e 或 E 时相同，但是尾部的零不会被移除。
|0	|在指定填充 padding 的数字左边放置零（0），而不是空格（参见 width 子说明符）。

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


## 2.7 ASCII

ASCII 定义了 128 个字符:

1. 0-31、127（删除键）是控制字符
2. 空白字符：空格（32）、 制表符、 垂直制表符、 换行、 回车。
3. 可显示字符：a-z、A-Z、0-9、~、！、@、、%、^、&、#、$、*、（、）、-、+、{、}、[、]、'、"、<、>、，、？、/、\|、\、_、：、;、.，还有顿号、。

ASCII 表：

|ASCII值|控制字符|ASCII值|控制字符|ASCII值|控制字符|ASCII值|控制字符|
|---|---|---|---|---|---|---|---|
|0   |NUT |**32**  |(space) |64  |@   |96  |、
|1   |SOH |33  |!   |**65**  |A   |**97**  |a
|2   |STX |34  |"   |66  |B   |98  |b
|3   |ETX |35  |#   |67  |C   |99  |c
|4   |EOT |36  |$   |68  |D   |100 |d
|5   |ENQ |37  |%   |69  |E   |101 |e
|6   |ACK |38  |&   |70  |F   |102 |f
|7   |BEL |39  |,   |71  |G   |103 |g
|8   |BS  |40  |(   |72  |H   |104 |h
|9   |HT  |41  |)   |73  |I   |105 |i
|**10**  |LF  |42  |*   |74  |J   |106 |j
|11  |VT  |43  |+   |75  |K   |107 |k
|12  |FF  |44  |,   |76  |L   |108 |l
|13  |CR  |45  |-   |77  |M   |109 |m
|14  |SO  |46  |.   |78  |N   |110 |n
|15  |SI  |47  |/   |79  |O   |111 |o
|16  |DLE |**48**  |0   |80  |P   |112 |p
|17  |DCI |49  |1   |81  |Q   |113 |q
|18  |DC2 |50  |2   |82  |R   |114 |r
|19  |DC3 |51  |3   |83  |S   |115 |s
|20  |DC4 |52  |4   |84  |T   |116 |t
|21  |NAK |53  |5   |85  |U   |117 |u
|22  |SYN |54  |6   |86  |V   |118 |v
|23  |TB  |55  |7   |87  |W   |119 |w
|24  |CAN |56  |8   |88  |X   |120 |x
|25  |EM  |57  |9   |89  |Y   |121 |y
|26  |SUB |58  |:   |90  |Z   |122 |z
|**27**  |ESC |59  |;   |91  |[   |123 |{
|28  |FS  |60  |<   |92  |/   |124 |\|
|29  |GS  |61  |=   |93  |]   |125 |}
|30  |RS  |62  |>   |94  |^   |126 |`
|31  |US  |63  |?   |95  |_   |127 |DEL

测试代码

~~~cpp
#include <stdio.h>

int main () {
    int ch;

    for( ch = 75 ; ch <= 100; ch++ ) {
        printf("ASCII value = %d, character = %c\n", ch , ch );
    }

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


## w. 微信订阅号

1. 智数精英-关注中小学程序设计及相关讨论
2. 随话录-记录小朋友们的成长时光
2. 西山征途-关注大学生成长、学习和生活

![欢迎关注“智数精英”订阅号](../../assets/me/img/idea8.jpg)
![欢迎关注“随话录”订阅号](../../assets/me/img/shl8.jpg)
![欢迎关注“西山征途”订阅号](../../assets/me/img/xszt8.jpg)

----------

## b. [返回](../)
    
## h. [首页](../../)

 