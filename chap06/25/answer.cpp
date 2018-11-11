#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    
    bool flag = false;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            for(k=0;k<7;k++){
                if (i*9*9+j*9+k==i+j*7+k*7*7 && (i!=0 || j!=0 || k!=0)){
                    cout << i*9*9+j*9+k  << endl;
                    cout << k << j << i << endl;
                    cout << i << j << k << endl; 
                }
            }
        }
    }
    
    return 0;
}