# Q04.20 求一元二次方程的根

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    
    double b2 = b * b;
    double dt = 4 * a * c;
    double a2 = 2 * a;
    
    if (b2 < dt)
    {
        double r = -b / a2;
        if (b==0){
            r = 0;
        }
        double v = sqrt(dt-b2)/a2;
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",r,v,r,v);
        
    }else{
        double x1 = (-b + sqrt(b2-dt))/a2;
        double x2 = (-b - sqrt(b2-dt))/a2;
        if (b2>dt)
        {
            printf("x1=%.5f;x2=%.5f",x1,x2);
        }else{
            printf("x1=x2=%.5f",x1);
        }
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

 