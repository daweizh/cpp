# A06.10:大整数加法

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[300],b[300];
    cin >> a >> b ;
    int alen = strlen(a);
    int blen = strlen(b);
    
    int max = alen;
    if (blen>max) max = blen;
    
    int c[max+1],d[max+1];
    int j,k;
    for (int i=1;i<=max;i++){
        if(i<=alen)
            c[max-i] = a[alen-i] - 48;
        else
            c[max-i] = 0;
        if(i<=blen)
            d[max-i] = b[blen-i] - 48;
        else
            d[max-i] = 0;
    }
    
    int more = 0, p=0;
    for (int i=max-1 ;i>=0;i--){
        p = c[i] + d[i] + more;
        if(p>=10){
            more = 1;
            c[i] = p - 10;
        }else{
            more = 0;
            c[i] = p ;
        }
    }
    
    int i = 0;
    if (more>0) 
       cout << more;
    else
        for (i=0;i<max;i++) {
            if (c[i]>0){
                break;
            }
        } 
    if(i==max) 
       cout << 0 << endl;
    
    for (int j=i;j<max;j++)
        cout << c[j];
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

