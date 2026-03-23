//METHOD 2 using extra varible & keeeping 'i' only for theiteration.
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
    int a = 4;
    for (int i = 1; i <=n; i++)
    {
        cout<<a<<" ";
        a = a + 3;
    }  
}