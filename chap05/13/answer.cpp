#include <iostream>
using namespace std;

int main(){
    double n,f=0;

    cin >> n;

    if ( n>=0 && n < 5 )
        f = -n + 2.5;
    else if (n>=5 && n<10)
        f = 2 -1.5*(n-3)*(n-3);
    else if (n>=10 && n<20)
        f = n / 2 - 1.5;

    printf("%.3f",f);
    
    return 0;
}
