#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double R,M,Y;
    
    cin >> R >> M >> Y;
    int w = M * pow((1+R/100),Y);
    printf("%d",w);
    
    return 0;
} 
