#include<iostream>
using namespace std;

int main() 
{
    char name[50];
    char designation[50];
    int salary;
    char organization[50];
    char field[50];

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"My name is: "<<name<<endl;

    cout<<"Enter your designation: ";
    cin>>designation;
    cout<<"My designation is: "<<designation<<endl;

    cout<<"Enter your salary (in LPA): ";
    cin>>salary;
    cout<<"My salary is: "<<salary<<" LPA"<<endl;

    cout<<"Enter your organization: ";
    cin>>organization;
    cout<<"My organization is: "<<organization<<endl;

    cout<<"Enter your field: ";
    cin>>field;
    cout<<"My field is: "<<field<<endl;

    return 0;
}