#include <iostream>
using namespace std;

int main(){
    int n,a[1000],b,sum=0;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b;
        sum = sum + a[i] * b;
    }
    cout << sum << endl;
    
    return 0;   
} 
