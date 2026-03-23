#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter three digit number : "<<endl;
    cin>>num;
    int h = (num/100);
    int t = (num/10)%10;
    int o = (num/10);
    cout<<h<<"hundred"<<endl;
    cout<<t<<"tens"<<endl;
    cout<<o<<"unit";
    return 0;
}