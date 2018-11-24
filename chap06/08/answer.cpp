#include <iostream>
using namespace std;

int main(){
    int a[10000],b[10000];
    int n,na,nb;
    cin >> n >> na >> nb;
    
    for(int i=0;i<na;i++) cin >> a[i];
    for(int i=0;i<nb;i++) cin >> b[i];
    
    int p = na;
    while(p<n){
        a[p] = a[p%na];
        p++;
    }
    p = nb;
    while(p<n){
        b[p] = b[p%nb];
        p++;
    }

    int A=0,B=0;    
    for(int i=0;i<n;i++){
        if(a[i]==0 && b[i]==2){
            A++;
        }
        if(a[i]==2 && b[i]==5){
            A++;
        }
        if(a[i]==5 && b[i]==0){
            A++;
        }
        if(a[i]==2 && b[i]==0){
            B++;
        }
        if(a[i]==5 && b[i]==2){
            B++;
        }
        if(a[i]==0 && b[i]==5){
            B++;
        }
    }
    
    if(A>B)
        cout << "A" << endl;
    else if(B>A)
       cout << "B" << endl;
    else
       cout << "draw" << endl; 
    
    return 0;
} 
