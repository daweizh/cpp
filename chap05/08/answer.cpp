#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;
    string s = "NO";
    if (n % 3==0 && n % 5==0)
        s = "YES";
    cout << s << endl;
    
    return 0;
}
