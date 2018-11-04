#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    string s = "n";
    if (n % 3==0 && n % 5==0 && n % 7==0)
        s = "3 5 7";
    else if (n % 3==0 && n % 5==0)
        s = "3 5";
    else if (n % 3==0 && n % 7==0)
        s = "3 7";
    else if (n % 5==0 && n % 7==0)
        s = "5 7";
    else if (n % 3==0)
        s = "3";
    else if (n % 5==0)
        s = "5";
    else if (n % 7==0)
        s = "7";

    cout << s << endl;
    
    return 0;
}
