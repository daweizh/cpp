#include <iostream>
using namespace std;

int main(){
    int begin[100],end[100],tree[10000],L,M,sum=0;
    
    cin >> L >> M;
    for(int i=0;i<=L;i++)
        tree[i] = 1;

    for(int i=0;i<M;i++){
        cin >> begin[i] >> end[i];
        for(int j=begin[i];j<=end[i];j++)
            tree[j]=0;
    }
    for(int i=0;i<=L;i++)
        if(tree[i]==1)
            sum = sum + 1;

    cout << sum << endl;
    
    return 0;   
} 
