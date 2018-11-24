#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char cs[300];
    
    cin.getline(cs,300);
    int len = strlen(cs);
    
    int sum = 0;
    for(int i=0;i<len;i++)
        if(cs[i]>='0' && cs[i]<='9')
            sum = sum + 1;
    cout << sum << endl;
    
    return 0;
}
