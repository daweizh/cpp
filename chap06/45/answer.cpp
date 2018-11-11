#include <iostream>
using namespace std;

int main(){
    long n,coin=1,sum=0;

    cin >> n ;
    int count = 1;
    while(count <= n){
        for(int j=1;j<=coin&&count <=n;j++){
            sum = sum + coin;
            count = count + 1;
        }
        coin = coin + 1;
    }
    cout << sum << endl;
    
    return 0;   
}