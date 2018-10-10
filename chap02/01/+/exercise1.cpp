#include <iostream>
using namespace std;

int main(){
	char str[200];
	
	cout << "Please type some words for cout message:";
	cin.getline(str,200);	
	clog << "cout message: " << str << endl;
	
	return 0;
}

