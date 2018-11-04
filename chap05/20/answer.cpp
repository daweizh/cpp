#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    
    double b2 = b * b;
    double dt = 4 * a * c;
    double a2 = 2 * a;
    
    if (b2 < dt)
    {
        double r = -b / a2;
        if (b==0){
            r = 0;
        }
        double v = sqrt(dt-b2)/a2;
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",r,v,r,v);
        
    }else{
        double x1 = (-b + sqrt(b2-dt))/a2;
        double x2 = (-b - sqrt(b2-dt))/a2;
        if (b2>dt)
        {
            printf("x1=%.5f;x2=%.5f",x1,x2);
        }else{
            printf("x1=x2=%.5f",x1);
        }
    }

    return 0;
}