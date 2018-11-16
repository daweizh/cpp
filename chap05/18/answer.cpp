#include <iostream>
using namespace std;

int main(){
    int n;
    double a[20][2];
    
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i][1] >> a[i][2];
    }
    
    double x = a[0][2] / a[0][1] * 100;
    for(int i=1;i<n;i++){
        double y = a[i][2] / a[i][1] * 100;
        if (y-x>5) {
            cout << "better" << endl;   
        } else if (x-y>5) {
            cout << "worse" << endl;    
        } else {
            cout << "same" << endl; 
        }
    }

    return 0;
} 