# A05.25 求特殊自然数 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    
    bool flag = false;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            for(k=0;k<7;k++){
                if (i*9*9+j*9+k==i+j*7+k*7*7 && (i!=0 || j!=0 || k!=0)){
                    cout << i*9*9+j*9+k  << endl;
                    cout << k << j << i << endl;
                    cout << i << j << k << endl; 
                }
            }
        }
    }
    
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

 