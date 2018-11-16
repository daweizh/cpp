#include <iostream>
using namespace std;

int main(){

    cout << "8000秒=";
    cout << 8000/3600 << "小时";
    cout << (8000%3600)/60 << "分钟";
    cout << 8000%3600%60 << "秒";
    cout << endl;

    return 0;
}
