#include <iostream>
using namespace std;

double g[101][101],w;

int main(){
	int i,j;
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	        g[i][j] = 0x7fffffff;

    cin >> e;
    for(int k=1;k<=e;i++){
    	cin >> i >> j >> w;
    	g[i][j] = w;
    	g[j][i] = w;
	}

    return 0;
}
