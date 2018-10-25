#include<iostream>  
#include<string>  
#include <limits>  
using namespace std;  
  
int main(){  
    cout << "type:\t\t" << "************size**************"<< endl;  
    cout << "bool:\t\t" << "bytes:" << sizeof(bool);  
    cout << "\tmax:" << (numeric_limits<bool>::max)();  
    cout << "\t\t\t\tmin:" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "bytes:" << sizeof(char);  
    cout << "\tmax:" << (numeric_limits<char>::max)();  
    cout << "\t\t\t\tmin:" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "bytes:" << sizeof(signed char);  
    cout << "\tmax:" << (numeric_limits<signed char>::max)();  
    cout << "\t\t\t\tmin:" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char:\t" << "bytes:" << sizeof(unsigned char);  
    cout << "\tmax:" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t\t\tmin:" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "bytes:" << sizeof(wchar_t);  
    cout << "\tmax:" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t\tmin:" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "bytes:" << sizeof(short);  
    cout << "\tmax:" << (numeric_limits<short>::max)();  
    cout << "\t\t\tmin:" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "bytes:" << sizeof(int);  
    cout << "\tmax:" << (numeric_limits<int>::max)();  
    cout << "\t\t\tmin:" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned int: \t" << "bytes:" << sizeof(unsigned);  
    cout << "\tmax:" << (numeric_limits<unsigned>::max)();  
    cout << "\t\t\tmin:" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "bytes:" << sizeof(long);  
    cout << "\tmax:" << (numeric_limits<long>::max)();  
    cout << "\t\t\tmin:" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "bytes:" << sizeof(unsigned long);  
    cout << "\tmax:" << (numeric_limits<unsigned long>::max)();  
    cout << "\t\t\tmin:" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "long long: \t" << "bytes:" << sizeof(long long);  
    cout << "\tmax:" << (numeric_limits<long long>::max)();  
    cout << "\tmin:" << (numeric_limits<long long>::min)() << endl;  
    cout << "double: \t" << "bytes:" << sizeof(double);  
    cout << "\tmax:" << (numeric_limits<double>::max)();  
    cout << "\t\tmin:" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "bytes:" << sizeof(long double);  
    cout << "\tmax:" << (numeric_limits<long double>::max)();  
    cout << "\t\tmin:" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "bytes:" << sizeof(float);  
    cout << "\tmax:" << (numeric_limits<float>::max)();  
    cout << "\t\tmin:" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "bytes:" << sizeof(size_t);  
    cout << "\tmax:" << (numeric_limits<size_t>::max)();  
    cout << "\tmin:" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "bytes:" << sizeof(string) ;  
    cout << "\tmax:" << (numeric_limits<string>::max)();
    cout << "\t\t\t\tmin:" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}

