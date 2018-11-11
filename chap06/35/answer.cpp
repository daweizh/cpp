#include <iostream>
using namespace std;

int main(){
    int n;
    double e = 1,p;

    cin >> n;
    for (int i=1;i<=n;i++){
        p = 1;
        for(int j=1;j<=i;j++)
            p = p * j;
        e = e + 1/p;
    }
    printf("%.10f",e);

    return 0;
}