#include <iostream>
using namespace std;

int main(){
    int n;
    long long int sum = 0,product=1;

    cin >> n;
    for (int i=1;i<=n;i++){
        product = 1;
        for(int j=1;j<=i;j++)
            product = product * j;
        sum = sum + product;
    }
    cout << sum << endl; 
        
    return 0;
} 