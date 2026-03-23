#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool flag = true; // true means prime numbers.
    for (int i = 1; i <= n/2; i++){
        if (n%i==0){
            flag = false; // false means composite numbers.
            break;
        }
        if (n == 1) cout<<"Neither prime or nor composite numbers.";
        else if (flag == true) cout<<"Prime numbers.";
            else cout<<"Composite numbers.";
    }
}