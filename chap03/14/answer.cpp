#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pi = 3.14159;
    double h,r;

    cin >> h >> r ;
    double v = pi * r * r * h / 1000;
    printf("%g", ceil(20/v) );

    return 0;
}
