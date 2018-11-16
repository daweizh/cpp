#include <iostream>
using namespace std;

int main(){
    int n,g,s,c,sg=0,ss=0,sc=0;

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> g >> s >> c;
        sg = sg + g;
        ss = ss + s;
        sc = sc + c; 
    }
    printf("%d %d %d %d",sg,ss,sc,sg+ss+sc);

    return 0;
}