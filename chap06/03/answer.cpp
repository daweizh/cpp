#include <iostream>
using namespace std;

int main(){
    int n;
    double a;
    double sum = 0;
    
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        sum = sum + a;  
    }
    printf("%.4f",sum/n);   

    return 0;
}
