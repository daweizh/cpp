#include <iostream>
using namespace std;

int main(){
    int n,score,mx=0;
    string name,ans;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> score >> name;
        if(score>mx){
            mx = score;
            ans = name;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
