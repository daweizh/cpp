#include <iostream>
using namespace std;

int main(){
    long long int n,r;
    
    cin >> n;
    while(n>0){
        r = n % 10;
        cout << r;
        n = (n - r)/10;
        if (n>0)
            cout << " ";
    }
    cout << endl;

    return 0;
} 