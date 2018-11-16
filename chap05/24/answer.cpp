#include <iostream>
using namespace std;

int main(){
    long n,a,b,sum=0,max=0;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if (a>=90 && a<=140 && b>=60 && b<=90){
            sum = sum + 1;
        }else{
            if (sum > max)
                max = sum;
            sum = 0;
        }
    }
    if (sum > max) 
        max = sum;
    cout << max  << endl;
    
    return 0;
} 