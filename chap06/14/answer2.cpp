#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,n;

    cin >> x >> n;
    printf("%.4f",x*pow((1+0.001),n));

    return 0;
}