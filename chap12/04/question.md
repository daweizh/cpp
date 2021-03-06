# Q12.04 最匹配的矩阵

总时间限制: 1000ms 内存限制: 65536kB

## 描述

给定一个m*n的矩阵A和r*s的矩阵B，其中0 < r ≤ m， 0 < s ≤ n，
A、B所有元素值都是小于100的正整数。
求A中一个大小为r*s的子矩阵C，使得B和C的对应元素差值的绝对值之和最小，
这时称C为最匹配的矩阵。
如果有多个子矩阵同时满足条件，选择子矩阵左上角元素行号小者，行号相同时，选择列号小者。

## 输入

第一行是m和n，以一个空格分开。   
之后m行每行有n个整数，表示A矩阵中的各行，数与数之间以一个空格分开。   
第m+2行为r和s，以一个空格分开。   
之后r行每行有s个整数，表示B矩阵中的各行，数与数之间以一个空格分开。   
（1 ≤ m ≤ 100,1 ≤ n ≤ 100）

## 输出

输出矩阵C，一共r行，每行s个整数，整数之间以一个空格分开。

## 样例输入

    3 3
    3 4 5
    5 3 4
    8 2 4
    2 2
    7 3
    4 9

## 样例输出

    4 5 
    3 4 

## 来源

医学部 2010 期末试题 林洪武

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

