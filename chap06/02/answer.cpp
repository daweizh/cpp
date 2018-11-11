#include <iostream>
using namespace std;

int main(){
    double a;
    double sum = 0;

    for (int i=0;i<12;i++){
        cin >> a;
        sum = sum + a;  
    }
    printf("$%.2f",sum/12); 

    return 0;
}