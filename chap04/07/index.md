# A03.07 计算多项式的值 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a1. 参考代码

~~~
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,d,x;

    cin >> x >>a >> b >>c >> d  ;
    cout  << fixed << setprecision(7) << a* pow(x,3) + b* pow(x,2) + c* x + d << endl;

    return 0;
}
~~~

## a2. 参考代码

~~~
#include <iostream>
using namespace std;

int main() {
    double a,b,c,d,x;

    cin >> x >>a >> b >>c >> d ;
    printf("%.7f",a*x*x*x+b*x*x+c*x+d);

    return 0;
}
~~~

## w. 微信订阅号

1. 智数精英-关注中小学程序设计及相关讨论
2. 随话录-记录小朋友们的成长时光
3. 西山征途-关注大学生成长、学习和生活

![欢迎关注“智数精英”订阅号](../../assets/me/img/idea8.jpg)
![欢迎关注“随话录”订阅号](../../assets/me/img/shl8.jpg)
![欢迎关注“西山征途”订阅号](../../assets/me/img/xszt8.jpg)

----------

## b. [返回](../)
    
## h. [首页](../../)

 