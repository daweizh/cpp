#include <iostream>
using namespace std;

int main(){
    int y;

    cin >> y;
    string s = "N";
    if (y % 4 ==0 && !(y % 100==0 && y % 400 !=0) && !(y%3200==0))
        s = "Y";
    cout << s << endl;
    
    return 0;
}