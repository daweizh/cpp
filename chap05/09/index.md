# A04.09 判断能否被3，5，7整除

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    string s = "n";
    if (n % 3==0 && n % 5==0 && n % 7==0)
        s = "3 5 7";
    else if (n % 3==0 && n % 5==0)
        s = "3 5";
    else if (n % 3==0 && n % 7==0)
        s = "3 7";
    else if (n % 5==0 && n % 7==0)
        s = "5 7";
    else if (n % 3==0)
        s = "3";
    else if (n % 5==0)
        s = "5";
    else if (n % 7==0)
        s = "7";

    cout << s << endl;
    
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

 