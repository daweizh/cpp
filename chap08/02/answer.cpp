#include <iostream>
using namespace std;

int main(){
	int n,x,y;
	cin >> n >> x >> y;
	
    cout << "(" << x << "," << 1 << ")";
	for(int i=2;i<=n;i++)
	    cout << " (" << x << "," << i << ")";
	cout << endl;
	
    cout << "(" << 1 << "," << y << ")";
	for(int i=2;i<=n;i++)
	    cout << " (" << i << "," << y << ")";
    cout << endl;
	
	int i=x,j=y;
	while(i>1 && j>1){
		i--;
		j--;
	}
	
    cout << "(" << i++ << "," << j++ << ")";
	while(i<=n && j<=n)
	    cout << " (" << i++ << "," << j++ << ")";
	cout << endl;

	i=x,j=y;
	while(i<n && j>1){
		i++;
		j--;
	}
    cout << "(" << i-- << "," << j++ << ")";
	while(i>=1 && j<=n)
	    cout << " (" << i-- << "," << j++ << ")";
	cout << endl;

    return 0;
}
