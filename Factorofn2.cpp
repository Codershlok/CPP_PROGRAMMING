#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for (int i = n/2; i >= n; i--)
    {
        if(n%i==0){  
    cout<<i<<" ";
    break; //to get out of loop statement
        }
    }
}