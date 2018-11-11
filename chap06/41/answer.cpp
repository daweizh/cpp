#include <iostream>
using namespace std;

int main(){
    int L,R,sum=0,a;

    cin >> L >> R ;
    for(int i=L;i<=R;i++){
        a = i;
        while(a>0){
            if (a % 10 == 2)
                sum = sum + 1;
            a = a / 10; 
        }
    }
    cout << sum << endl;
    
    return 0;   
}
