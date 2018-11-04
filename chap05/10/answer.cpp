#include <iostream>
using namespace std;

int main(){
    int c1,c2;

    cin >> c1 >> c2;

    string s = "0";
    if ((c1<60 && c2>=60 )|| (c1>=60 && c2 <60))
        s = "1";
    cout << s << endl;
    
    return 0;
}
