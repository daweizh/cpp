#include <iostream>
using namespace std;

int main(){
    int n,a,sum=0;
    int first,second,third,forth;
    
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        forth = a % 10;
        third = (a - forth)/10 % 10;
        second = (a-forth - third * 10)/100 % 10;
        first = (a - forth - third*10 - second * 100)/1000;
        if (forth - first - second - third > 0){
            sum = sum + 1;
        }
    }
    cout << sum << endl;
    
    return 0;
} 