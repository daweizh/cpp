# Q06.03 计算书费

总时间限制: 1000ms 内存限制: 65536kB

**题目描述：**  
下面是一个图书的单价表：  
计算概论 28.9 元/本  
数据结构与算法 32.7 元/本  
数字逻辑 45.6元/本  
C++程序设计教程 78 元/本  
人工智能 35 元/本  
计算机体系结构 86.2 元/本  
编译原理 27.8元/本  
操作系统 43 元/本  
计算机网络 56 元/本  
JAVA程序设计 65 元/本  
给定每种图书购买的数量，编程计算应付的总费用。 

**输入：**  
输入一行，包含10个整数(大于等于0，小于等于100)，分别表示购买的《计算概论》、《数据结构与算法》、《数字逻辑》、《C++程序设计教程》、《人工智能》、《计算机体系结构》、《编译原理》、《操作系统》、《计算机网络》、《JAVA程序设计》的数量（以本为单位）。每两个整数用一个空格分开。 

**输出：**   
输出一行，包含一个浮点数f，表示应付的总费用。精确到小数点后一位。

**样例输入：**  
    1 5 8 10 5 1 1 2 3 4

**样例输出：**  
    2140.2


**数据范围限制：**


**参考解程序：**

    #include <iostream>
    using namespace std;
    
    int main()
    {
        float cost=0, price[]={28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
        int num[10];
        
        for(int i=0;i<10;i++)
            cin >> num[i];  

        for(int i=0;i<10;i++)
            cost = cost + price[i] * num[i]; 

        printf("%.1f",cost);
        
        return 0;   
    } 



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

