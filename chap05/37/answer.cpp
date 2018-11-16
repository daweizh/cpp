#include <iostream>
using namespace std;

int main(){
    int M,N,X;
    
    cin >> M >> N >> X ;
    while(N <=M && X * N >=M){
        if (M%N==0)
            X = X - M / N;
        else
            X = X - M / N -1;
        N = N + M/N;
    }
    printf("%d",N);
    
    return 0;
}
