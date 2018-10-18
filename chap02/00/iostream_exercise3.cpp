#include <iostream>
using namespace std;

int main(){
	char str[200];
	
	cout << "Please type some words for clog message:";
	cin.getline(str,200);	
	clog << "clog message: " << str << endl;
	
	return 0;
}

