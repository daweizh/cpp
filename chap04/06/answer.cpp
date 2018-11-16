#include <iostream>
using namespace std;

int main(){
    int i;

    cin >> i;

    if (i>=10 && i<=99)
        i = 1;
    else
        i = 0;      

    cout << i << endl;
    
    return 0;
}
