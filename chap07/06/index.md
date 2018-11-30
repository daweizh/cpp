# A07.06 合法C标识符 

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## a. 参考代码

~~~cpp
#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i=0;
    for(;i<s.size();i++){
        if(s[0]>='0' && s[0]<='9'){
            break;
        }
        if(s[i]=='_' 
            || (s[i]>='0' && s[i]<='9') 
            || (s[i]>='a' && s[i]<='z') 
            || (s[i]>='A' && s[i]<='Z')
        )
            continue;
        else
            break;
        
    }
    if(i==s.size()){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    
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

 