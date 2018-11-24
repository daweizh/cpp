#include <iostream>
using namespace std;

int main(){
    int num[10005];
    int n,t,i;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> num[i];
    }
    cin >> t;
    for(i=1;i<=n;i++){
        if(num[i]==t){
            cout << i << endl;
            break;
        }
    }
    if(i>n)
        cout << -1 << endl;
        
    return 0;
}
