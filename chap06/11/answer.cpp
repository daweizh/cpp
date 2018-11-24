#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[201],b[201];
char c[201];

int main(){
	gets(c);
	int lena = strlen(c);
	for(int i=0;i<lena;i++)
	    a[i] = c[i] - '0';
	reverse(a,a+lena);
	
	gets(c);
	int lenb = strlen(c);
	for(int i=0;i<lenb;i++)
	    b[i] = c[i] - '0';
	reverse(b,b+lenb);
	
	for(int i=0;i<lenb;i++){
		if(a[i]<b[i]){
	       a[i] = a[i] + 10 - b[i];
		   a[i+1] = a[i+1] -1; 
		}else{
			a[i] = a[i] - b[i];
		}
	}
	reverse(a,a+lena);
	int i=0;
	while(a[i]==0) i++;
	for(;i<lena;i++)
		cout << a[i];
	cout << endl;	
		
    return 0;
}
