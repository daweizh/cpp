#include <iostream>
using namespace std;

int main(){
    int x,y;

    cin >>x >> y;
    string s = "no";
    if (x<=1 && x>=-1 && y <=1 && y>=-1)
        s = "yes";
    cout << s << endl;
    
    return 0;
}