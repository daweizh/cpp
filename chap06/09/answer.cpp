#include <iostream>
using namespace std;

int main(){
    int m,n,sum=0;

    cin >> m >> n;
    for (int i=m;i<=n;i++){
        if(i%2==1){
            sum = sum + i;
        }
    }
    printf("%d",sum);

    return 0;
}