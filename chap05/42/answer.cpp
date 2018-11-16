#include <iostream>
using namespace std;

int main(){
    int h,w,fill;
    char c;
    
    cin >> h >> w >> c >> fill ;
    for (int i=0;i<w;i++) 
        cout << c;
    cout << endl;
    
    for (int i=0;i<h-2;i++){
        cout << c;
        for(int j=0;j<w-2;j++)
            if (fill==0) 
                cout << " ";
            else
                cout << c;
        cout << c << endl;
    }
    
    for (int i=0;i<w;i++)
        cout << c;

    cout << endl;
    
    return 0;   
}