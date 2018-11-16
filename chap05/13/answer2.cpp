#include <iostream>
using namespace std;

int main(){
    int a,n,mul=1;

    cin >> a >> n;
    for(int i=0;i<n;i++){
        mul = mul * a;
    }
    cout << mul << endl;
            
    return 0;
}