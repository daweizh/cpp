# A08.01 矩阵交换行

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    int mat[5][5],n,m;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> mat[i][j]; 
        }
    }
    cin >> n >> m;
    n--,m--;
    for(int i=0;i<5;i++){
        int tmp = mat[n][i];
        mat[n][i] = mat[m][i];
        mat[m][i] = tmp;
    }
    
    for(int i=0;i<5;i++){
        cout << mat[i][0] ;
        for(int j=1;j<5;j++){
            cout << " " << mat[i][j];
        }
        cout << endl;
    }
    
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

 