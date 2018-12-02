#include <iostream>
using namespace std;

int main(){
	int tmp;
	string s;
	
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' && s[i]<='Z'){
			tmp = s[i]-5;
			if(tmp < 65)
			    s[i]='Z'+tmp-64;
			else
				s[i] = tmp;
		}
	}
	cout << s << endl;
	
    return 0;
}
