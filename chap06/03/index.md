# A06.03 计算书费

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    float cost=0, price[]={28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
    int num[10];
    
    for(int i=0;i<10;i++)
        cin >> num[i];  

    for(int i=0;i<10;i++)
        cost = cost + price[i] * num[i]; 

    printf("%.1f",cost);
    
    return 0;   
} 
~~~


## u. 相关链接

1. H5计算机应用能力培养
2. CPP编程基础
3. NOIP真题训练营
4. Everyday English

![H5计算机应用能力培养](../../assets/me/img/h5_130.png)
![CPP编程基础](../../assets/me/img/cpp_130.png)
![NOIP真题训练营](../../assets/me/img/noip_130.png)
![Everyday English](../../assets/me/img/ee_130.png)


----------

## w. 微信订阅号

1. 智数精英-关注中小学程序设计及相关讨论
2. 随话录-记录小朋友们的成长时光
3. 西山征途-关注大学生成长、学习和生活

![欢迎关注“智数精英”订阅号](../../assets/me/img/idea_130.jpg)
![欢迎关注“随话录”订阅号](../../assets/me/img/shl_130.jpg)
![欢迎关注“西山征途”订阅号](../../assets/me/img/xszt_130.jpg)

----------

## b. [返回](../)
    
## h. [首页](../../)

