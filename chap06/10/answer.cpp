#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[300],b[300];
    cin >> a >> b ;
    int alen = strlen(a);
    int blen = strlen(b);
    
    int max = alen;
    if (blen>max) max = blen;
    
    int c[max+1],d[max+1];
    int j,k;
    for (int i=1;i<=max;i++){
        if(i<=alen)
            c[max-i] = a[alen-i] - 48;
        else
            c[max-i] = 0;
        if(i<=blen)
            d[max-i] = b[blen-i] - 48;
        else
            d[max-i] = 0;
    }
    
    int more = 0, p=0;
    for (int i=max-1 ;i>=0;i--){
        p = c[i] + d[i] + more;
        if(p>=10){
            more = 1;
            c[i] = p - 10;
        }else{
            more = 0;
            c[i] = p ;
        }
    }
    
    int i = 0;
    if (more>0) 
	   cout << more;
    else
	    for (i=0;i<max;i++) {
	        if (c[i]>0){
	            break;
	        }
	    } 
    if(i==max) 
	   cout << 0 << endl;
    
    for (int j=i;j<max;j++)
        cout << c[j];
    cout << endl;
            
    return 0;
}
