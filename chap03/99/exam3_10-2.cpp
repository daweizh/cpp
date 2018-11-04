编程实现两个变量x、y之间值的交换。

#include <iostream>
using namespace std;

int main(){
    float x,y,t;
    x = 10.5;
    y = 30.6;
    
    cout << x << " " << y << endl;
    
    x+=y;y=x-y;x-=y;
    
    cout << x << " " << y << endl;

    return 0;
}
