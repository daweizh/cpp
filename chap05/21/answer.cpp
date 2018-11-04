#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;

    if (n>0){
        if(y>0){
            if (x>0){
                int m = y/x +1;
                if (y%x==0){
                    m = y/x;
                }
                if (n-m>0){
                    printf("%d",n-m);
                } else {
                    printf("0");
                }
            } else {
                printf("%d",n);
            }       
        } else {
            printf("%d",n);
        }
    } else {
        printf("0");    
    }

    return 0;
}
