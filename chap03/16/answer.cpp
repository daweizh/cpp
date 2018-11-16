#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double xa,ya;
    double xb,yb;

    cin >> xa >> ya;
    cin >> xb >> yb;
    printf("%.3f", sqrt(pow(xa-xb,2)+pow(ya-yb,2)) );

    return 0;
}
