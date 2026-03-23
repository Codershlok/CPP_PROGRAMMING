//METHOD 1
//FORMULA : an = a+(n-1)d
//an = a+(nd-d)
//an = a+nd-d
//an = nd-(d-a)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for (int i = 1; i <= 2*n-1; i+=2)
    {
        cout<<i<<" ";
    }  
}