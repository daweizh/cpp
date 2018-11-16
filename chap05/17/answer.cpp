#include <iostream>
using namespace std;

int main(){
    int k,first=1,second=1,fb;
    
    cin >> k;

    if (k > 2)
        for (int i=3;i<=k;i++){
            fb = first + second;
            first = second;
            second = fb;
        }
    else
        fb = 1;
    cout << fb << endl;
            
    return 0;
}