#include <iostream>
using namespace std;

int main(){
    int n,c[100];
    
    cin >> n ;
    for(int i=n;i>=0;i--){
        cin >> c[i];
        c[i] = c[i] * i;
    }

    cout << c[n];
    for(int i=n-1;i>0;i--)
        cout << " " << c[i];
    cout << endl;
    
    return 0;   
}