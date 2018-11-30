#include <iostream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int i=0;
	for(;i<s.size();i++){
		if(s[0]>='0' && s[0]<='9'){
			break;
		}
		if(s[i]=='_' 
	        || (s[i]>='0' && s[i]<='9') 
			|| (s[i]>='a' && s[i]<='z') 
			|| (s[i]>='A' && s[i]<='Z')
		)
	        continue;
		else
			break;
        
	}
	if(i==s.size()){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	
    return 0;
}
