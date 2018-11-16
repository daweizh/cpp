# Chap02.需要了解的

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 


## 2.1 main

每个C++程序都包含一到多个函数，但必须有一个函数叫`main`，如下：

~~~
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
    ~~~
    #include <iostream>
    
    int main(){
        char str[200];
        
        std::cin >> str;
        std::cout << str << std::endl;
        
        return 0;
    } 
    ~~~
2. cout
    ~~~
    #include <iostream>
    
    int main(){
        
        std::cout << "Example for cout." << std::endl;
        
        return 0;
    }
    ~~~
3. cerr
    ~~~
    #include <iostream>
    
    int main(){
        
        std::cerr << "Example for cerr." << std::endl;
        
        return 0;
    }
    ~~~
4. clog
    ~~~
    #include <iostream>
    
    int main(){
        
        std::clog << "Example for clog." << std::endl;
        
        return 0;
    }
    ~~~

## 2.3 cout

cout语句的一般格式为：
    cout << 项目1 << 项目2 << ... << 项目n;

功能：

1. 如果项目是表达式，则输出表达式的值。
2. 如果项目加引号，则输出引号内的内容。

在执行cout语句，先把数据放在输出缓冲区中，直到输出缓冲区满或遇到cout语句中的endl或'\n'为止，
此时将缓冲区中已有的数据一起输出，并清空缓冲区。输出遇到endl或'\n'换行。


## 2.4 namespace

为了区分相同的名字使用`namespace`，在不同的`namespace`中可以使用相同的名字。

可以用`using namespace std`声明后续代码使用`std`命名空间，如代码

~~~
#include <iostream>

int main(){
    
    std::cout << "Example for cout." << std::endl;
    
    return 0;
}
~~~

中的`std`可以通过`using namespace std`省略掉。

~~~
#include <iostream>
using namespace std;

int main(){
    
    cout << "Example for cout." << endl;
    
    return 0;
}
~~~

## 2.5 DevCpp 快捷键

1. F11 编译执行
2. F9 编译（找程序的语法错误）
3. insert 改变光标作用（插入或者覆盖）
4. home 光标移到行首（文字头）
5. end 行尾
6. Tab 制表键（缩进4字符）

----

1. Ctrl+n 创建新文件
2. Ctrl+s 保存文件（文件名用英文，最好有意义，大小写区分）
3. Ctrl+a 全选
4. Ctrl+c 复制到剪贴板
5. Ctrl+v 复制到光标当前位置
6. Ctrl+z 后悔
7. Ctrl+y 重做

----

1. Shift+↑ 从光标处开始向上选择
2. Shift+↓ 从光标处开始向下选择
3. Shift+→ 从光标处开始向右选择 
4. Shift+← 从光标处开始向左选择

## 2.6 关键字

1. include 包含
2. iostream=>input output stream 输入输出流
3. using 使用
4. namespace 名字空间
5. std=>standard 标准
6. int=>integer 整数
7. main 主程序 操作系统调用的入口函数
8. return 返回

~~~
#include <iostream>
using namespace std;

int main(){
    char s[200];

    cin >> s;
    cout << s << endl;

    return 0;
}
~~~

1. cout 代表标注输出设备：屏幕，打印机，网络
2. cin 代表输入设备：键盘，鼠标，触屏，输入笔
3. endl=>end line 结束一行

cin 和 cout 是外部世界和程序通讯的指令

变量使用来保存数据的地方，如`int a,b,c`中，a,b,c是变量，变量（筐）大小由前面int规定，由此a,b,c就是int那么大2^32，是个十位数。


## 2.7 message

1. [Error(错误)] expected（期望） ';' before（在。。。之前） 'return'
2. [Error] 'cin' was not declared（声明） in this scope（范围）
3. [Note（提示）] 'std::cin'


## 2.8 web resources

1. [http://noi.openjudge.cn](http://noi.openjudge.cn)
2. [http://daweizh.github.io/cpp](http://daweizh.github.io/cpp)
3. [http://daweizh.github.io/noip](http://daweizh.github.io/noip)


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

 