#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n,x,y;

    cin >> n >> x >> y ;
    printf("%g", n-ceil(y/x) );

    return 0;
}
