#include <iostream>
using namespace std;

int ans[100];
int p[100];

int main(){
	int n,len=1;
	cin >> n;
	p[0]=1,ans[0]=1;
	for(int i=2;i<=n;i++){
		int more=0;
        for(int j=0;j<len;j++){
        	int tmp = p[j]*i;
        	int r =  (tmp + more) / 10;
        	p[j] = (tmp + more) % 10;
			more = r; 
		}
		while(more>0){
			p[len++] = more % 10;
			more = more / 10;
		}
		more = 0;
		for(int j=0;j<=len;j++){
			int tmp = ans[j]+p[j]+more; 
			ans[j] = tmp % 10;
			more = tmp / 10;
		}
	}
	for(int i=len-1;i>=0;i--)
	    cout << ans[i];
	cout << endl;		
	
    return 0;
}
