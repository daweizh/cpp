#include <iostream>
using namespace std;

int main() {
    double a,b;

    cin >> a >> b ;
    int c = (int)(a / b);
    printf("%g", a - b*c);

    return 0;
}
