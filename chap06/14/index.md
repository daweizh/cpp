# A06.14 求10000以内n的阶乘

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a1. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int ans[10000];
int num[10000];

int main(){
    int n,len=1;
    ans[0]=1;
    cin >> n;
    for(int p=1;p<n;p++){ //n
        for(int i=0;i<len;i++) num[i] = ans[i];
        for(int i=0;i<p;i++){ //times
            int more = 0,j=0,flag=0;
            for(;j<=len;j++){
                int r = (ans[j]+num[j]+more) / 10;
                ans[j] = (ans[j] + num[j] + more) % 10;
                more = r;
                if(more>0 && ans[j+1]==0) flag=1;
            }
            ans[j]=more;
            if(flag && ans[len]!=0){
                len++;
            }
        }
    } 
    
    for(int i=len-1;i>=0;i--)
            cout << ans[i];
    cout << endl;
        
    return 0;
}
~~~

## a2. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int ans[100000];

int main(){
    int n,len=1;
    cin >> n;
    ans[0]=1;
    for(int i=2;i<=n;i++){
        int more=0;
        for(int j=0;j<len;j++){
            int tmp = ans[j]*i;
            int r =  (tmp + more) / 10;
            ans[j] = (tmp + more) % 10;
            more = r; 
        }
        while(more>0){
            ans[len++] = more % 10;
            more = more / 10;
        }
    }
    for(int i=len-1;i>=0;i--)
        cout << ans[i];
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

