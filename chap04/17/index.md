# A03.17 计算三角形面积

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1,y1,x2,y2,x3,y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double l1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    double l2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    double l3 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    double p = (l1 + l2 + l3) / 2;

    printf("%.2f", sqrt(p*(p-l1)*(p-l2)*(p-l3)));

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

 