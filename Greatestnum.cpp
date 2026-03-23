//NESTED IF ELSE STATEMENT
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b){// b can never be the greatest.
    if(a>c){
        cout<<a<<"is the greatest";
    }
    else { //c>a , a>b->c>a>b
        cout<<c<<"is the greatest";
    }
}
    else { //b>a
        if(b>c){
            cout<<b<<"is the greatest";
        }
        else { // c>b , C>b>a
            cout<<c<<"is the greatest";
        }
        }
}