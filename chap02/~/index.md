# Chap02.需要了解的

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## 2.1 `<iostream>`

I/O 库头文件。
该文件定义了 cin、cout、cerr 和 clog 对象，
分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。

example:

1. cin
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        char str[200];
        
        cin >> str;
        cout << str << endl;
        
        return 0;
    } 
    ~~~
2. cout
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        
        cout << "Example for cout." << endl;
        
        return 0;
    }
    ~~~
3. cerr
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        
        cerr << "Example for cerr." << endl;
        
        return 0;
    }
    ~~~
4. clog
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        
        clog << "Example for clog." << endl;
        
        return 0;
    }
    ~~~

exercise:

1. 用cout输出一行输入的信息
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        char str[200];
        
        cout << "Please type some words for cout message:";
        cin.getline(str,200);   
        clog << "cout message: " << str << endl;
        
        return 0;
    }
    ~~~
2. 用cerr输出一行输入的信息
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        char str[200];
        
        cout << "Please type some words for cerr message:";
        cin.getline(str,200);   
        clog << "cerr message: " << str << endl;
        
        return 0;
    }
    ~~~
3. 用clog输出一行输入的信息
    ~~~
    #include <iostream>
    using namespace std;
    
    int main(){
        char str[200];
        
        cout << "Please type some words for clog message:";
        cin.getline(str,200);   
        clog << "clog message: " << str << endl;
        
        return 0;
    }
    ~~~

## 2.2 基本数据类型

## step5

`int`？

|类型|关键字|字节|范围|
|---|---|---|---|
|布尔型|bool|1|0~1|
|字符型|char|1|-128~127 或者 0~255|
|短整型|short|4|-32768~32767|
|整型|int|4|-2147483648~2147483647|
|长整型|long|8|-9223372036854775808~9223372036854775807|
|浮点型|float|4|1.17549e-38~3.40282e+38|
|双浮点型|double|8|2.22507e-308~1.79769e+308|
|无类型|void|||

## step5

`printf("%8d %8d %8d",a,b,c);`？

`printf()`是格式化输出函数,格式是`printf("<格式化字符串>", <参量表>)`。


## step5

`\n`?

|符号|意义|符号|意义|
|---|---|---|---|
|\a|铃声(提醒)|\b|Backspace|
|\f|换页|\n|换行|
|\r|回车|\t|水平制表符|
|\v|垂直制表符|\’|单引号|
|\”|双引号|\\|反斜杠|


## step5

`main`?





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

 