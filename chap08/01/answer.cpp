#include <iostream>
using namespace std;

int main(){
    int mat[5][5],n,m;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> mat[i][j]; 
        }
    }
    cin >> n >> m;
    n--,m--;
    for(int i=0;i<5;i++){
        int tmp = mat[n][i];
        mat[n][i] = mat[m][i];
        mat[m][i] = tmp;
    }
    
    for(int i=0;i<5;i++){
        cout << mat[i][0] ;
        for(int j=1;j<5;j++){
            cout << " " << mat[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
