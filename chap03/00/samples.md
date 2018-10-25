## 1.1

用记事本编写一个程序，让计算机告诉大家我爱编程，即“I love programming.”

~~~
//exam1.1
#include <iostream>
using namespace std;

int main(){

    cout << "I love programming." << endl;
    return 0;
}
~~~


## 1.2 

把20张画平均分给7个同学，每人分得几张，还剩几张？

~~~
//exam1.2
#include <iostream>
using namespace std;

int main(){

    cout << 20 / 7 << endl;
    cout << 20 % 7 << endl;
    
    return 0;
}
~~~

## 1.3 

阅读下列程序和运行结果，学习表达式的书写格式。
了解程序中表达式运算先后顺序和数学习惯的数学表达式运算先后顺序的关系。

~~~
//exam1.3
#include <iostream>
using namespace std;

int main(){

    cout << 9/8 << 4*(6+3)%5 << (4*6+3)%5 << endl;
    
    return 0;
}
~~~

## 1.4 

在例1.3中3个表达式的运行结果紧挨在一起，希望改变输出方式，要求：
（1）在每个表达式值隔开一个空格；
（2）在结果前提示表达式。

~~~
//exam1.4
#include <iostream>
using namespace std;

int main(){

    cout << 9/8 << 4*(6+3)%5 << (4*6+3)%5 << endl;
    cout << 9/8 << " " << 4*(6+3)%5 << " " << (4*6+3)%5 << endl;
    cout << "9/8=" << 9/8 << " 4*(6+3)%5=" << 4*(6+3)%5 << " (4*6+3)%5=" << (4*6+3)%5 << endl;
    
    return 0;
}
~~~

## 1.5 

将8000秒表示成小时分钟秒的形式。

~~~
//exam1.5
#include <iostream>
using namespace std;

int main(){

    cout << "8000秒=";
    cout << 8000/3600 << "小时";
    cout << (8000%3600)/60 << "分钟";
    cout << 8000%3600%60 << "秒";
    cout << endl;
    
    return 0;
}
~~~

## 1.6 

4个工人3天铺了90m<sup>2</sup>地板砖，照这样计算，5个工人6天能铺多少平方米地板砖？

~~~
//exam1.6
#include <iostream>
using namespace std;

int main(){

    cout << "5个工人6天能铺";
    cout << 90.0/3/4*5*6 << " 平方米地板砖。" << endl;
    
    return 0;
}
~~~


## 1.7 

分析下面的程序运行结果。

~~~
//exam1.7
#include <iostream>
using namespace std;

int main(){

    cout << 15*3/2 << endl;
    cout << 15*3/2.0 << endl;
    
    return 0;
}
~~~


## 1.8 

阅读下列程序和运行结果，理解实数运算和整数运算的区别，
理解`fixed << setprescision(8)`格式函数的作用。

~~~
//exam1.8
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    cout << "9/8=" << 9/8;
    cout << " 9.0/8=" << 9.0/8;
    cout << " 9/8.0=" << 9/8.0;
    cout << " 9.0/8.0=" << 9.0/8.0;
    cout << endl;
    
    cout << "10.0/6.0=" << 10.0/6.0 << endl;
    cout << "10.0/6.0=" << fixed << setprecision(8) << 10.0/6.0 << endl;
    
    return 0;
}
~~~


