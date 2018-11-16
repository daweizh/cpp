#include <iostream>
using namespace std;

int main(){
    long K,n=0;
    double sn = 0;
    
    cin >> K;
    while(sn<=K){
        n = n + 1;
        sn = sn + 1.0d/n;
    }
    cout << n << endl;

    return 0;
} 