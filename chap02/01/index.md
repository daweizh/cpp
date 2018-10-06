# A02.01 Hello, World!

- 张大为
- 辽宁师范大学计算机与信息技术学院@大连
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/)  QQ:1243605845

## step1

书写程序主入口函数框架

~~~
int main() {

    return 0;
}
~~~

在**Dev Cpp**中，按**F9**编译，按**F11**编译执行。

## step2

增加输入输出功能

~~~
#include <iostream>
    
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
~~~

## step3

用另一种方法说Hello, World!

~~~
#include <iostream>
    
int main(){
    printf("Hello, World!");
    return 0;
}
~~~

## step4

简化`std`前缀

~~~
#include <iostream>
using namespace std;
    
int main(){
    cout << "Hello, World!" << endl;
    return 0;
}
~~~

## step5 

`<iostream>`?

I/O 库头文件。
该文件定义了 cin、cout、cerr 和 clog 对象，
分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。

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

## step6

做点练习。

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

 