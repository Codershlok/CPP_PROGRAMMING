#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int f = 1; //stores highest factor.
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0) f=i;
    }  
    cout<<f;
}