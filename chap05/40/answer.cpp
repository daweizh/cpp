#include <iostream>
using namespace std;

int main(){
    int n,sum=0,a;
    
    cin >> n ;
    for(int i=1;i<=n;i++){
        a = i;
        while(a>0){
            if (a % 10 == 1)
                sum = sum + 1;
            a = a / 10; 
        }
    }
    cout << sum << endl;
    
    return 0;   
}