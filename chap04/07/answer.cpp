#include <iostream>
using namespace std;

int main(){
    int x,y,z;

    cin >> x >> y;

    if (x>=10 || y >= 20)
        z = 1;
    else
        z = 0;      

    cout << z << endl;
    
    return 0;
}
