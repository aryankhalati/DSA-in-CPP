#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;

    int op;
    cout<<"Enter operation to be performed : ";
    cin>>op;

    switch(op)
    {
        case 1: 
        cout<<"Sum = "<<a+b;
        break;
        case 2: 
        cout<<"Difference = "<<a-b;
        break;
        case 3: 
        cout<<"Product = "<<a*b;
        break;
        case 4: 
        cout<<"Quotient = "<<a/b;
        break;
        default: 
        cout<<"Invalid";
    }
    return 0;
}