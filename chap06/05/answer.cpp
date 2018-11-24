#include <iostream>
using namespace std;

int main(){
    int num[100],n,sum=0;
    float age[4] = {0.0,0.0,0.0,0.0};
    
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> num[i];
        sum = sum + 1;
        if(num[i]<=18){
            age[0] = age[0] + 1;
        }else if(num[i]<=35){
            age[1] = age[1] + 1;
        }else if(num[i]<=60){
            age[2] = age[2] + 1;
        }else{
            age[3] = age[3] + 1;
        }
    }
    for(int i=0;i<4;i++)
        printf("%.2f%%\n",age[i]*100.00f/sum); 
    
    return 0;   
} 

