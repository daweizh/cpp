#include <iostream>
using namespace std;

int main(){
    int n,a,s1=0,s5=0,s10=0;

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        if(a==1){
            s1 = s1 + 1;
        }
        
        if(a==5){
            s5 = s5 + 1;
        }
        if(a==10){
            s10 = s10 + 1;
        }
    }
    cout << s1 << endl; 
    cout << s5 << endl; 
    cout << s10 << endl;

    return 0;
}