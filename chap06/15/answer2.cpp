#include <iostream>
using namespace std;

int main(){
    double R,M,Y;
    
    cin >> R >> M >> Y;
    for (int i=0;i<Y;i++){
        M = M * (1 + R/100);
    }
    printf("%d",(int)M);
    
    return 0;
}
