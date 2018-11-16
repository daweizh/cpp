#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n ;
    int h = n /100;
    printf("%d%d%d", (n - h * 100 )%10, (n - h * 100)/10, n/100 );

    return 0;
}
