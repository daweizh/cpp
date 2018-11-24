# A08.02 同行列对角线的格子 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    
    cout << "(" << x << "," << 1 << ")";
    for(int i=2;i<=n;i++)
        cout << " (" << x << "," << i << ")";
    cout << endl;
    
    cout << "(" << 1 << "," << y << ")";
    for(int i=2;i<=n;i++)
        cout << " (" << i << "," << y << ")";
    cout << endl;
    
    int i=x,j=y;
    while(i>1 && j>1){
        i--;
        j--;
    }
    
    cout << "(" << i++ << "," << j++ << ")";
    while(i<=n && j<=n)
        cout << " (" << i++ << "," << j++ << ")";
    cout << endl;

    i=x,j=y;
    while(i<n && j>1){
        i++;
        j--;
    }
    cout << "(" << i-- << "," << j++ << ")";
    while(i>=1 && j<=n)
        cout << " (" << i-- << "," << j++ << ")";
    cout << endl;

    return 0;
}
~~~

## u. 相关链接

1. [H5计算机应用能力培养=>https://daweizh.github.io/h5/](https://daweizh.github.io/h5/)
2. [CPP编程基础=>https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/)
3. [NOIP真题训练营=>https://daweizh.github.io/noip/](https://daweizh.github.io/noip/)
4. [Everyday English=>https://daweizh.github.io/ee/](https://daweizh.github.io/ee/)

----------

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

 