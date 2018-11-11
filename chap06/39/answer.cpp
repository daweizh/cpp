#include <iostream>
using namespace std;

int main(){
    int n,sum=0,a;

    cin >> n ;
    for(int i=1;i<=n;i++){
        if(i%7!=0){
            a = i;
            while(a>0){
                if(a%10 == 7)
                    break;
                a = a / 10; 
            }
            if (a==0)
                sum = sum + i * i;
        }
    }
    cout << sum << endl;
    
    return 0;   
}
