#include <iostream>
using namespace std;

int main(){
    int n,a,sum=0;

    cin >> n;
    for (int i=1;i<n;i++){
        cin >> a;
        sum = sum + a;
    }
    printf("%d",(n-2)*180-sum); 

    return 0;
}