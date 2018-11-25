#include <iostream>
using namespace std;

int main(){
    float cost=0, price[]={28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
    int num[10];
    
    for(int i=0;i<10;i++)
        cin >> num[i];  

    for(int i=0;i<10;i++)
        cost = cost + price[i] * num[i]; 

    printf("%.1f",cost);
    
    return 0;   
} 

