#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double w;
    char c;
    int f;

    cin >> w >> c;
    if (w <= 1000)
        f = 8;
    else
        f = ceil((w-1000)/500)*4 + 8;
    if (c=='y')
        f = f + 5;
    printf("%d",f);
    
    return 0;
}