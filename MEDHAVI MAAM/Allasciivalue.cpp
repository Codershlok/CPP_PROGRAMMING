#include<iostream>
using namespace std;
int main()
{
    char ch;
    for(ch = 'A'; ch <= 'z'; ch++)
    {
        cout << "The ASCII value of " << ch << " is " << int(ch) << "\t";
    }
    return 0;
}