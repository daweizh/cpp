#include <iostream>
#include <algorithm>
using namespace std;
int a[500];
bool comp(int a,int b){
	 return a < b;	
}

int main(){
    int n,tmp,p=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        if(tmp%2==1)
             a[p++]=tmp;
    }
    sort(a,a+p,comp);
    
    cout << a[0];
    for(int i=1;i<p;i++)
        cout << "," << a[i];
    cout << endl;
    
    return 0;
}
