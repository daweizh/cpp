#include <iostream>
using namespace std;

int main(){
    int N,m,a[100],sum=0;
    
    cin >> N;
    for(int i=0;i<N;i++)
        cin >> a[i];    

    cin >> m;
    for(int i=0;i<N;i++)
        if (a[i]==m)
            sum = sum + 1;

    cout << sum << endl;
    
    return 0;   
} 

