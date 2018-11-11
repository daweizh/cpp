# A05.15 银行利息

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a1. 参考代码

~~~cpp
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double R,M,Y;
    
    cin >> R >> M >> Y;
    int w = M * pow((1+R/100),Y);
    printf("%d",w);
    
    return 0;
} 
~~~

## a2. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    double R,M,Y;
    
    cin >> R >> M >> Y;
    for (int i=0;i<Y;i++){
        M = M * (1 + R/100);
    }
    printf("%d",(int)M);
    
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

 