#include <iostream>
using namespace std;
string a;
string b;
float h;

int main(){
	cin >> h >> a >> b;
	float sum = 0;
	for(int i=0;i<a.size();i++){
		if(a[i]==b[i]){
			sum = sum + 1;
		}
	}	
    if(sum/a.size()>=h)
	    cout << "yes" << endl;
    else
   	    cout << "no" << endl;
    	
    return 0;
}
