#include <iostream>
using namespace std;

int main(){
    double m;

    cin >> m;
    string s = "All";
    double bikeTime = m / 3.0 + 50;
    double walkTime = m / 1.2;
    if ( bikeTime < walkTime )
        s = "Bike";
    else if (bikeTime > walkTime)
        s = "Walk";
    cout << s << endl;
    
    return 0;
}