# Chap07. 需要了解的

- 张大为 QQ:1243605845 @大连
- 辽宁师范大学计算机与信息技术学院
- [https://daweizh.github.io/cpp/](https://daweizh.github.io/cpp/) 

## 7.1 子串读入方法总结

~~~
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

char ch;
char cs[100];
string str;

int main(){
    //freopen("data.in","r",stdin);
    
    //while((ch=getchar())!=EOF)
    //    putchar(ch);               
    
    //while(gets(cs)>0)
    //    puts(cs);
    
    //while(scanf("%c",&ch)>0)
    //  printf("%c",ch);
    
    //while(scanf("%s",cs)>0)
    //    printf("%s\n",cs);
    
    //while(cin >> ch)
    //   cout << ch << endl;

    //while(cin >> cs)
    //   cout << cs << endl;

    //while((ch=cin.get())!=EOF)
    //    cout << ch << endl;
 
    //while(cin.getline(cs,100)>0)
    //    cout << cs << endl;

    
    //while(cin>>str)
    //    cout << str << "\t length=" << str.size() << endl;
 
    //while(getline(cin,str))
    //    cout << str << "\t length=" << str.size() << endl;
        
    getline(cin,str);
       cout << str.find("hello") << endl;        
                    
    //fclose(stdin);
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

 