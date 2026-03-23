#include<iostream>
using namespace std;
 int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter nnumber of colons: ";
    cin>>n;
    for (int i = 1; i <= m; i++) //rows = m
    {
        for (int i = 1; i <= n; i++) //colons = n
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
 }