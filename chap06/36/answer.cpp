#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long int n;
    double x,f = 1,p;

    cin >> x >> n ;
    f = f + x;
    for (int i=2;i<=n;i++)
        f = f + pow(x,i);
    printf("%.2f",f);   
    
    return 0;
}