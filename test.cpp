#include <iostream>
#include "awap.cpp"
using namespace std;

int main()
{
    int val1=32;
    int val2=20;

    cout<<"Before swap:"<<endl;
    cout<<"value1="<<val1<<endl;
    cout<<"value2="<<val2<<endl;
    awap(val1,val2);
    cout<<"After swap:"<<endl;
    cout<<"value1="<<val1<<endl;
    cout<<"value2="<<val2<<endl;

    return 0;
}