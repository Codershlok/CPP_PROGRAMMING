#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    for(int i=1; i<=m; i++){    //rows = m
        for(int j=1; j<=m; j++){     //cols = m
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}