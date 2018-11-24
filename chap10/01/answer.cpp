#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    string id;
    float score;
}s[100];

bool comp(student a,student b){
    return a.score > b.score;
}

int main(){
    int n,k;
   	
   	cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> s[i].id >> s[i].score;
    }
    sort(s,s+n,comp);
    
    cout << s[k-1].id << " " << s[k-1].score << endl;
    
    return 0;
}
