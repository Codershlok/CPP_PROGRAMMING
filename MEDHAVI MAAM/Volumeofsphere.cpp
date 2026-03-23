#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Enter the radius "<<endl;
    cin>>a;
    float area = 4*3.14*a*a;
    cout<<"The area of sphere is "<<area;
    float volume =(4.0/3.14*3*a*a*a);
    return 0;
}