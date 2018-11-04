#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    string s = "positive";
    if (n ==0)
        s = "zero";
    else if (n<0)
        s = "negative";

    cout << s << endl;
            
    return 0;
}
