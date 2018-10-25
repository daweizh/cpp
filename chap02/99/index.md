# Answ02. 习题参考答案

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## e1. 练习一

1. 让计算机告诉大家我爱编程，即“I love programming.”
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
    
        cout << "I love programming." << endl;

        return 0;
    }
    ~~~
2. 把20张画平均分给7个同学，每人分得几张，还剩几张？
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
    
        cout << 20 / 7 << endl;
        cout << 20 % 7 << endl;
        
        return 0;
    }
    ~~~
3. 阅读下列程序和运行结果，学习表达式的书写格式。
了解程序中表达式运算先后顺序和数学习惯的数学表达式运算先后顺序的关系。
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
    
        cout << 9/8 << 4*(6+3)%5 << (4*6+3)%5 << endl;
        
        return 0;
    }
    ~~~
4. 题3中3个表达式的运行结果紧挨在一起，希望改变输出方式，要求：
（1）在每个表达式值隔开一个空格；
（2）在结果前提示表达式。
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
    
        cout << 9/8 << 4*(6+3)%5 << (4*6+3)%5 << endl;
        cout << 9/8 << " " << 4*(6+3)%5 << " " << (4*6+3)%5 << endl;
        cout << "9/8=" << 9/8 << " 4*(6+3)%5=" << 4*(6+3)%5 << " (4*6+3)%5=" << (4*6+3)%5 << endl;
        
        return 0;
    }
    ~~~
5. 将8000秒表示成小时分钟秒的形式。
    ~~~
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
6. 4个工人3天铺了90m<sup>2</sup>地板砖，照这样计算，5个工人6天能铺多少平方米地板砖？
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
    
        cout << "5个工人6天能铺";
        cout << 90.0/3/4*5*6 << " 平方米地板砖。" << endl;
        
        return 0;
    }
    ~~~
7. 分析下面的程序运行结果。
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
    
        cout << 15*3/2 << endl;
        cout << 15*3/2.0 << endl;
        
        return 0;
    }
    ~~~
8. 阅读下列程序和运行结果，理解实数运算和整数运算的区别，
理解`fixed << setprescision(8)`格式函数的作用。
    ~~~
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

## e2. 练习二


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

 