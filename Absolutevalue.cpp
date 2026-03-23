//CONDITIONAL STATEMENT
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    //if(n>=0){
    //    cout<<n;
    //}
    //else{
    //    cout<<-n;
    //}
    // If you want to change n number into its absolute value
    if(n<0)n = -n;
    cout<<n;
}