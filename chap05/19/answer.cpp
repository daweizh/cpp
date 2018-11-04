#include <iostream>
using namespace std;

int main(){
    int x,y;
    char c;
    int result = 0;
    
    cin >>x >> y >> c;

    string s = "";
    switch(c){
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y==0)
                s = "Divided by zero!";
            else
                result = x / y;
            break;
        default:
            s = "Invalid operator!";        
    }   

    if (s=="")
        cout << result << endl;
    else
        cout << s << endl;
    
    return 0;
}
