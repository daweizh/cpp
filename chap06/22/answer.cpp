#include <iostream>
using namespace std;

int main(){
    long p,a,r =0,sum=0;

    for(int i=0;i<12;i++){
        r = r + 300;
        cin >> p;
        r = r - p;
        a = r/100;
        sum = sum + a * 100;
        r = r - a * 100;
        if (r<0){
            cout << "-" << i+1 << endl;
            break;
        }    
    }
    if (r>0)
        cout << sum * 1.2 + r << endl;
    
    return 0;   
} 