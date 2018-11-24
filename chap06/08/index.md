# A06.08 石头剪刀布 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    int a[10000],b[10000];
    int n,na,nb;
    cin >> n >> na >> nb;
    
    for(int i=0;i<na;i++) cin >> a[i];
    for(int i=0;i<nb;i++) cin >> b[i];
    
    int p = na;
    while(p<n){
        a[p] = a[p%na];
        p++;
    }
    p = nb;
    while(p<n){
        b[p] = b[p%nb];
        p++;
    }

    int A=0,B=0;    
    for(int i=0;i<n;i++){
        if(a[i]==0 && b[i]==2){
            A++;
        }
        if(a[i]==2 && b[i]==5){
            A++;
        }
        if(a[i]==5 && b[i]==0){
            A++;
        }
        if(a[i]==2 && b[i]==0){
            B++;
        }
        if(a[i]==5 && b[i]==2){
            B++;
        }
        if(a[i]==0 && b[i]==5){
            B++;
        }
    }
    
    if(A>B)
        cout << "A" << endl;
    else if(B>A)
       cout << "B" << endl;
    else
       cout << "draw" << endl; 
    
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

