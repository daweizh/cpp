#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

char ch;
char cs[100];
string str;

int main(){
	//freopen("data.in","r",stdin);
	
	//while((ch=getchar())!=EOF)
    //    putchar(ch);				 
	
	//while(gets(cs)>0)
    //    puts(cs);
    
	//while(scanf("%c",&ch)>0)
	//	printf("%c",ch);
	
	//while(scanf("%s",cs)>0)
 	//    printf("%s\n",cs);
	
	//while(cin >> ch)
	//   cout << ch << endl;

	//while(cin >> cs)
	//   cout << cs << endl;

	//while((ch=cin.get())!=EOF)
    //    cout << ch << endl;
 
	//while(cin.getline(cs,100)>0)
    //    cout << cs << endl;

	
	//while(cin>>str)
	//    cout << str << "\t length=" << str.size() << endl;
 
    //while(getline(cin,str))
    //    cout << str << "\t length=" << str.size() << endl;
		
	getline(cin,str);
	   cout << str.find("hello") << endl;		 
		   	 	    
	//fclose(stdin);
    return 0;
}
