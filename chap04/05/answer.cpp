#include <iostream>
using namespace std;

int main(){
    int x,y;

    cin >> x >> y;

    string s = ">";
    if (x==y)
        s = "=";
    else if (x <y)
        s = "<"; 

    cout << s << endl;
    
    return 0;
}
