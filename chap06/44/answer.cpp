#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long n,c=2,i=3,j;
    bool flag = false;

    cin >> n ;
    if (n==1) 
        i = 2;
    else 
        while(c<n){
            i = i + 2;
            flag = true;
            for(j=2;j<=sqrt(i);j++)
                if (i % j==0){
                    flag = false;
                    break;
                }
            if(flag)
                c = c + 1;
        }
    cout << i << endl;
    
    return 0;   
}