#include <iostream>
#include <cstring>
using namespace std;

int n[100];
char c[100];

int main(){
	int flag = 1;
	gets(c);

	int len = strlen(c);
	for(int i=0;i<len;i++) 
		n[i] = c[i]-'0';

	for(int k=2;k<=9;k++){
		int r = 0;
		for(int i=0;i<len;i++){
			r = (n[i] +r*10) % k; 
		}
		if(r==0){
		   cout << k << " ";
		   flag = 0;
		}
	}		
	if(flag) cout << "none" << endl;
	else cout << endl;
		
    return 0;
}
