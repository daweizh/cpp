#include <iostream>
using namespace std;

int main(){
    int x,y,z;

    cin >> x >> y >>z;
    string s = "yes";
    if (x + y <= z)
        s = "no";
    else if(x + z <= y)
        s = "no";
    else if(y + z <= x)
        s = "no";
    cout << s << endl;
    
    return 0;
}