# A04.12 骑车与走路

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~
#include <iostream>
using namespace std;

int main(){
    double m;

    cin >> m;
    string s = "All";
    double bikeTime = m / 3.0 + 50;
    double walkTime = m / 1.2;
    if ( bikeTime < walkTime )
        s = "Bike";
    else if (bikeTime > walkTime)
        s = "Walk";
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

 