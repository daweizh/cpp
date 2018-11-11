#include <iostream>
using namespace std;

int main(){
    long N,M;
    bool light = true;

    cin >> N >> M;
    cout << 1 ;
    for(int i=2;i<=N;i++){
        light = true;   
        for(int j=1;j<=M;j++){
            if(i%j==0)
                light = ! light;
        }
        if(!light)
            cout << "," << i;
    }
    
    return 0;
} 