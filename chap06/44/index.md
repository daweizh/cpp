# A05.44 第n小的质数 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long n,c=2,i=3,j;
    bool flag = false;

    cin >> n ;
    if (n==1) 
        i = 2;
    else 
        while(c<n){
            i = i + 2;
            flag = true;
            for(j=2;j<=sqrt(i);j++)
                if (i % j==0){
                    flag = false;
                    break;
                }
            if(flag)
                c = c + 1;
        }
    cout << i << endl;
    
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

 