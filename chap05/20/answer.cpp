#include <iostream>
using namespace std;

int main(){
    double h,sum=0;
    
    cin >> h;
    sum = h;
    for(int i=1;i<10;i++){
        sum = sum + h;
        h = h / 2;
    }
    cout << sum << endl;
    cout << h/2 << endl;
    
    return 0;
} 