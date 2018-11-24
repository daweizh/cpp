#include<cstdio>  
#include<iostream>  
using namespace std; 
 
int n,a,b,c;  
bool v[6000];  

int main(){  
    scanf("%d%d",&n,&a); 
 
    for(int i=1;i<n;i++){  
        scanf("%d",&b);  
        c=max(a-b,b-a);  
        if(c>5000){
            printf("Not jolly\n");  
            return 0;
        }  
        if(v[c]){
            printf("Not jolly\n");
            return 0;
        }  
        v[c]=1;
        a=b;  
    }  
    for(int i=1;i<n;i++)   
        if(!v[i]){
            printf("Not jolly\n");
            return 0;
        }  
    printf("Jolly\n");  
    return 0;
}

