#include <iostream>
using namespace std;

int main(){
    int n,a,max = 0,min=10000;

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if (a>max){
            max = a;
        }
        if(a<min){
            min = a;
        }
    }
    printf("%d",max-min);   

    return 0;
}