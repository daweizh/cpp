#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1,y1,x2,y2,x3,y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double l1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    double l2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    double l3 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    double p = (l1 + l2 + l3) / 2;

    printf("%.2f", sqrt(p*(p-l1)*(p-l2)*(p-l3)));

    return 0;
}
