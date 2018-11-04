#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y,z;

    cin >> x >> y >>z;
    int max = x;
    if (y > max)
        max = y;
    if (z>max)
        max = z;
    printf("%d",max);
    
    return 0;
}