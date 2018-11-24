#include <iostream>
#include <cstdlib>
using namespace std;

int a[100005],n,m,tmp;

int bfind(int v){
    int l=0,r=n-1,mid;
    
    while(l<=r){
        mid = (l+r) >> 1;
        if(v<=a[mid])
            r = mid-1;
        else
            l = mid+1;
    }
    cout << l << "\t" << r << endl;
    
    return abs(a[l]-v)<abs(a[r]-v)?a[l]:a[r];
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> tmp;
        if(tmp<a[0]){
        	cout << a[0] << endl;
        	continue;
		}
		if(tmp>a[n-1]){
			cout << a[n-1] << endl;
			continue;
		}
        cout << bfind(tmp) << endl;
    }
    
    return 0;
}
