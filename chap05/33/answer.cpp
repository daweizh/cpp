#include <iostream>
using namespace std;

int main(){
    int n;
    double sum = 0;

    cin >> n;
    for (int i=1;i<=n;i++){
        if(i%2==1)
            sum = sum + 1.0d/i;
        else
            sum = sum - 1.0d/i;
    }
    printf("%.4f",sum);

    return 0;
} 