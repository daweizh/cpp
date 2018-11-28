#include <iostream>
using namespace std;

string a,b;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a[0]==b[0])
            cout << "Tie" << endl;
  	    else if(a[0]=='P'){
  	   	    if(b[0]=='R'){
  	   	    	cout << "Player1" << endl;
	        }else{
				cout << "Player2" << endl; 	
	        }
	    }else if(a[0]=='R'){
  	   	    if(b[0]=='S'){
  	   	    	cout << "Player1" << endl;
	        }else{
				cout << "Player2" << endl; 	
	        }
		 	
		}else if(a[0]=='S'){
  	   	    if(b[0]=='P'){
  	   	    	cout << "Player1" << endl;
	        }else{
				cout << "Player2" << endl; 	
	        }
		 	
		}
	}
    return 0;
}
