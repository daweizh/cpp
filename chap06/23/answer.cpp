#include <iostream>
using namespace std;

int main(){
    long m,n,a,sum=0;
    
    cin >> m >>n;
    for(int i=0;i<n;i++){
        cin >> a;
        if (m -a >= 0)
            m = m - a;
        else
            sum = sum + 1;
    }
    cout << sum  << endl;
    
    return 0;   
} 
