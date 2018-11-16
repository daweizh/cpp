#include <iostream>
using namespace std;

int main(){
    long long int N;
    cin >> N;
    
    while(N>1){
        if(N%2==1){
            cout << N << "*3+1=" << N * 3 + 1 << endl;
            N = N * 3 + 1;
        }else{
            cout << N << "/2=" << N / 2 << endl;
            N = N / 2; 
        } 
    }
    cout << "End";
    
    return 0;   
} 
