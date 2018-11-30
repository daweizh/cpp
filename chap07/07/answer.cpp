#include <iostream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		switch(s[i]){
			case 'A':cout << 'T';break;
			case 'T':cout << 'A';break;
			case 'G':cout << 'C';break;
			case 'C':cout << 'G';break;
		}
	}
    return 0;
}
