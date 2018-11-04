#include <iostream>
using namespace std;

int main(){
    int d;

    cin >> d;

    string s = "YES";
    if (d==1 || d==3 || d == 5 )
        s = "NO";
    cout << s << endl;
    
    return 0;
}