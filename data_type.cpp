#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int a = 2;
    float b = 2.5;
    char c ='R';
    bool d = true;
    double e = 2343.2;
    // Type Checking (i.e which type of data)
    cout << a <<" is a " << typeid(a).name() <<endl; 
    cout << b <<" is b " << typeid(b).name() <<endl; 
    cout << c <<" is c " << typeid(c).name() <<endl; 
    cout << d <<" is d " << typeid(d).name() <<endl; 
    cout << e <<" is e " << typeid(e).name() <<endl; 

}