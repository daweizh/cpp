#include <iostream>
using namespace std;

int main(){
    string s;
    char a,b;
    cin >> s >> a >> b;
    for(int i=0;i<s.size();i++){
    	if(s[i]==a)
		   s[i]=b;
	}
    cout << s << endl;
	 
    return 0;
}
