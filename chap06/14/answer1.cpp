#include <iostream>
using namespace std;

int ans[10000];
int num[10000];

int main(){
	int n,len=1;
	ans[0]=1;
	cin >> n;
	for(int p=1;p<n;p++){ //n
		for(int i=0;i<len;i++) num[i] = ans[i];
		for(int i=0;i<p;i++){ //times
		    int more = 0,j=0,flag=0;
		    for(;j<=len;j++){
				int r = (ans[j]+num[j]+more) / 10;
				ans[j] = (ans[j] + num[j] + more) % 10;
				more = r;
				if(more>0 && ans[j+1]==0) flag=1;
			}
			ans[j]=more;
			if(flag && ans[len]!=0){
				len++;
			}
		}
	} 
	
	for(int i=len-1;i>=0;i--)
			cout << ans[i];
	cout << endl;
		
    return 0;
}
