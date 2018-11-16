# A05.22 津津的储蓄计划 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    long p,a,r =0,sum=0;

    for(int i=0;i<12;i++){
        r = r + 300;
        cin >> p;
        r = r - p;
        a = r/100;
        sum = sum + a * 100;
        r = r - a * 100;
        if (r<0){
            cout << "-" << i+1 << endl;
            break;
        }    
    }
    if (r>0)
        cout << sum * 1.2 + r << endl;
    
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

 