#include<iostream>
using  namespace std;
int main(){
    int x;
    int y;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    cout<<"modulus of two number is : "; //modulo gives remainder .
    cout<<x % y;
}
//Important points of modulo :
 // a % a = a
 // a % a = 0
 // a % -b = a % b
 // -a % b = -[a % b]