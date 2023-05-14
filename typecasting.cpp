#include<iostream>
//#include<typeinfo>
using namespace std;
int main(int argc, char const *argv[])
{
    /*
    Method 1 ---->
    int a = 'a';
    //cout<<typeid(a).name()<<endl;
    cout << a <<endl;
    */
   // method 2 ---->
   char a = 'a';
   int b;
   b= a;
   cout<<b;
   
    return 0;
}
