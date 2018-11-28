#include <iostream>
using namespace std;

string s;

int main(){
    cin >> s;
    
    for(int i=0;i<s.size()-1;i++){
    	int tmp = s[i]+s[i+1];
    	cout << char(tmp);
	}
	cout << char(s[0]+s[s.size()-1]) << endl;
	
    return 0;
}
