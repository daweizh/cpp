#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,temp;

    cin >> s;
    while(cin >> temp){
        s += ' ' + temp;
    }
    cout << s << endl;
    
    return 0;
}
