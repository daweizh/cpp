#include <iostream>
using namespace std;

int ans[100];

int main(){
	int n,i,m=1;
	cin >> n;
	ans[0]=1;
	while(n--){
		int more =0;
		i=0;
		for(;i<m;i++){
			int temp = ans[i] * 2 + more;
			ans[i]=temp % 10;
			more = temp / 10;
		}
		if(more){
	        ans[i]=more;
 			m++;
		}	
	}
	
	while(!ans[i]) i--;
	for(int t=i;t>=0;t--){
		cout << ans[t];
	}
	cout << endl;
	
    return 0;
}
