#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool check(double x){
	double ans = pow(x,5.0);
	ans = ans - 15*pow(x,4.0);
	ans = ans + 85*pow(x,3.0);
	ans = ans - 225*pow(x,2.0);
	ans = ans + 274*x;
	ans = ans - 121;
	if (ans>0.0) return 1; //left 0.0
	return 0;              // right 0.0
}

int main(){
	double l = 1.5,r = 2.4,mid;

	while(r-l > 0.00000001){
		mid = (l+r)/2.0;
		if(check(mid))
            l = mid;
        else
            r = mid;
	}
	cout << fixed << setprecision(6) << mid <<  endl;
	
    return 0;
}
