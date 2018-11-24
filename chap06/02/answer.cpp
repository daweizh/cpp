#include <iostream>
using namespace std;

int main(){
    int a[100],h,sum=0;
    
    for(int i=0;i<10;i++)
        cin >> a[i];    

    cin >> h;
    for(int i=0;i<10;i++)
        if (a[i]<=30+h)
            sum = sum + 1;

    cout << sum << endl;
    
    return 0;
} 

