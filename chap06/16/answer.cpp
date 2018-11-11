#include <iostream>
using namespace std;

int main(){
    int i;
    double N,K, M = 200;
    
    cin >> N >> K;

    for (i=1;i<=20;i++){
        if (N * i >= M)
            break;
        M = M * (1 + K/100);
    }
    
    if(i<=20)   
        printf("%d",i);
    else
        cout << "Impossible" << endl;
            
    return 0;
} 