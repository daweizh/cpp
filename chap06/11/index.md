# A06.11 大整数减法

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[201],b[201];
char c[201];

int main(){
    gets(c);
    int lena = strlen(c);
    for(int i=0;i<lena;i++)
        a[i] = c[i] - '0';
    reverse(a,a+lena);
    
    gets(c);
    int lenb = strlen(c);
    for(int i=0;i<lenb;i++)
        b[i] = c[i] - '0';
    reverse(b,b+lenb);
    
    for(int i=0;i<lenb;i++){
        if(a[i]<b[i]){
           a[i] = a[i] + 10 - b[i];
           a[i+1] = a[i+1] -1; 
        }else{
            a[i] = a[i] - b[i];
        }
    }
    reverse(a,a+lena);
    int i=0;
    while(a[i]==0) i++;
    for(;i<lena;i++)
        cout << a[i];
    cout << endl;   
        
    return 0;
}
~~~


## u. 相关链接

1. [H5计算机应用能力培养 =>https://daweizh.github.io/h5/](https://daweizh.github.io/h5/)
2. [CPP编程基础 =>https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/)
3. [NOIP真题训练营 =>https://daweizh.github.io/noip/](https://daweizh.github.io/noip/)
4. [Everyday English =>https://daweizh.github.io/ee/](https://daweizh.github.io/ee/)

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

