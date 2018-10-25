# Chap03.需要了解的

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 


## 3.1 基本概念

1. CCF=>China Computer Federation: 中国计算机协会
2. NOI=>National Olympiad Informatics: 全国青少年信息学奥林匹克竞赛 （CCF1984年创办）
3. CS=>Computer Science: 计算机科学
4. NOIP=>National Olympiad in Informatics in Provinces:全国青少年信息学奥林匹克联赛

> “计算机科学教育的核心是算法设计和编程，
> 这要求学生面对一个给定的现实问题要能够找到一个正确和高效的办法（算法）
> 并将其变成计算机能理解的语言（程序设计语言），
> 进而让计算机计算出人们需要的结果来。”

#

> “用计算机解题并不容易，因为将一个问题抽象并构造一个模型，
> 需要一定的数学基础，还得理解计算机的特点，“指挥”计算机干活。
> 这还涉及欲求解问题的“可计算性”，因为并不是任何问题都可以由计算机求解的。”

#

> “计算机也并不知道什么是“问题”，是人告诉计算机，如何按照一步一步的程序求解。
> 这个过程，就会训练一个人求解问题的能力，相应地，
> 其具备的让计算机做事的思维能力称之为“计算思维”（Computing Thinking）。”

#

> 我们必须知道如何让计算机做事，起码知道计算机是如何做事的，这就要求普及计算机科学教育。

#

> 在新经济形态中，计算机科学已不再是可选技能，而是同阅读、写作和算术一样的基础技能。


- 计算机是通过执行一个个程序来实现各种神奇的功能。
- **程序**就是为实现特定目标或解决特定问题而用计算机语言编写的一系列指令序列。
- **计算机语言**是人与计算机之间通信的语言。
- 编程可以简单理解为程序员为解决特定问题，按照自己的思路，在遵循特定的计算机语言规则下编写程序的过程。
- 在某种计算机语言环境下编写程序的过程，叫程序的编辑。
- 对所编写程序进行解析的过程叫翻译，翻译分为两种，
	- 一种叫解释，是计算机对程序的指令翻译一句执行一句
	- 另一种叫编译，是计算机对程序的全部指令一次性全部翻译后，再让计算机执行的行为。
- 高级语言程序要通过编译器才能运行得到结果。

## 3.2 数据类型

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


## 3.3 ASCII

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

 