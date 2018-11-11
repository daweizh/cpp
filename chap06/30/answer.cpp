#include <iostream>
using namespace std;

int main(){
    long m,k,sum=0;
    
    cin >> m >> k;
    if (m % 19 ==0){
        while(m!=0){
            if (m % 10==3)
                sum = sum + 1;
            m = m / 10;
        }
        if (sum==k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }else
        cout << "NO" << endl;
    
    return 0;
} 
