# A06.07 有趣的跳跃

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include<cstdio>  
#include<iostream>  
using namespace std; 
 
int n,a,b,c;  
bool v[6000];  

int main(){  
    scanf("%d%d",&n,&a); 
 
    for(int i=1;i<n;i++){  
        scanf("%d",&b);  
        c=max(a-b,b-a);  
        if(c>5000){
            printf("Not jolly\n");  
            return 0;
        }  
        if(v[c]){
            printf("Not jolly\n");
            return 0;
        }  
        v[c]=1;
        a=b;  
    }  
    for(int i=1;i<n;i++)   
        if(!v[i]){
            printf("Not jolly\n");
            return 0;
        }  
    printf("Jolly\n");  
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

