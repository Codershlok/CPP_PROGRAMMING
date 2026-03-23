//MULTIPLE CONDITIONAL STATEMENT
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"3 digit number";
    }
            else {
            cout<<"Not a 3 digit number : ";
        }
}