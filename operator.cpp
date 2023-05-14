#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // Arithmatic Operator
    cout <<"Add =>"<< 4+2<<endl;
    cout <<"sub =>"<< 4-2<<endl;
    cout <<"mul =>"<< 4*2<<endl;
    cout <<"div =>"<< 4/2.5<<endl;
    cout <<"mod =>"<< 4%2<<endl;
    // Replational Operator
    cout <<"=>"<< (4>2)<<endl;
    cout <<"=>"<< (4<2)<<endl;
    cout <<"=>"<< (4>=2)<<endl;
    cout<<"<="<<(4<=2)<<endl;
    cout<<"=>"<<(4==2)<<endl;
    // Logical Operator
    cout << "---------------------"<<endl;
    cout<<"And==>"<<(4&&2)<<endl;
    cout<<"OR==>"<<(4||2)<<endl;
    cout<<"Not==>"<<!(4)<<endl;
    // Bitwise Operator
    cout << "---------------------"<<endl;
    cout<<"And==>"<<(4&6)<<endl;
    cout<<"OR==>"<<(4|6)<<endl;
    cout<<"Not==>"<<~(4)<<endl;
    cout<<"XOR==>"<<(4^6)<<endl;
    cout<<"Right-Shift==>"<<(4>>6)<<endl;
    cout<<"Left-Shift==>"<<(4<<6)<<endl;
    return 0;
}
