#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int num[30];
    char cs[100005];
    gets(cs);
    int len = strlen(cs);
    for(int i=0;i<len;i++){
        int c = cs[i]-97;
        num[c]++;
    }
    
    int i=0;
    for(;i<len;i++){
        if(num[cs[i]-97]==1){
            cout << cs[i] << endl;
            break;
        }
    }
    if(i==len)
        cout << "no" << endl;


    return 0;
}
