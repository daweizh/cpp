#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double a,b,c,t=0;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        t = t + sqrt(a*a+b*b) * 2 / 50 + 1.5 * c;
    }
    printf("%.0f",ceil(t));
    
    return 0;   
} 