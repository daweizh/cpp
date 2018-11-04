#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    string s = "even";
    if (n%2==1)
        s = "odd";

    cout << s << endl;
    
    return 0;
}
