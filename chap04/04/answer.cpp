#include <iostream>
using namespace std;

int main(){
    char c=getchar();

    string s = "NO";
    if (c%2==1)
        s = "YES";

    cout << s << endl;
    
    return 0;
}
