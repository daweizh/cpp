#include <iostream>
using namespace std;

int main(){
	char str[200];
	
	cout << "Please type some words for cerr message:";
	cin.getline(str,200);	
	clog << "cerr message: " << str << endl;
	
	return 0;
}

