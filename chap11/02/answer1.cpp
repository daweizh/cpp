#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
	double ans = pow(x,5.0);
	ans = ans - 15*pow(x,4.0);
	ans = ans + 85*pow(x,3.0);
	ans = ans - 225*pow(x,2.0);
	ans = ans + 274*x;
	ans = ans - 121;
	return ans;
}

int main(){
	double l = 1.5,r = 2.4,mid,ans = 0.0;

	while(l<r){
		mid = (l+r)/2.000000;
		ans = f(mid);	
		if(ans >0.0)
            l = mid;
        else if (ans < 0.0)
            r = mid;
        if (abs(ans-0.000000)<0.00000001)
           break;
	}
	printf("%.6f",mid);
	
    return 0;
}
