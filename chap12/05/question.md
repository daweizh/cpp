# Q12.05 统计单词数

总时间限制: 1000ms 内存限制: 65536kB

## 描述

一般的文本编辑器都有查找单词的功能，该功能可以快速定位特定单词在文章中的位置，
有的还能统计出特定单词在文章中出现的次数。

现在，请你编程实现这一功能，具体要求是：
给定一个单词，请你输出它在给定的文章中出现的次数和第一次出现的位置。
注意：匹配单词时，不区分大小写，但要求完全匹配，
即给定单词必须与文章中的某一独立单词在不区分大小写的情况下完全相同（参见样例1），
如果给定单词仅是文章中某一单词的一部分则不算匹配（参见样例2）。

## 输入
2 行。   
第 1 行为一个字符串，其中只含字母，表示给定单词；   
第 2 行为一个字符串，其中只可能包含字母和空格，表示给定的文章。

## 输出

只有一行，如果在文章中找到给定单词则输出两个整数，两个整数之间用一个空格隔开，
分别是单词在文章中出现的次数和第一次出现的位置
（即在文章中第一次出现时，单词首字母在文章中的位置，位置从0开始）；
如果单词在文章中没有出现，则直接输出一个整数-1。

## 样例输入1

    To
    to be or not to be is a question


## 样例输出1
    
    2 0

## 样例输入2

    to
    Did the Ottoman Empire lose its power at that time

## 样例输出2

-1

## 来源

NOIP2011复赛 普及组 第二题

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
