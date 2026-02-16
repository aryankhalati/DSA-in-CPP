#include<iostream>
using namespace std;
int main()
{
    int r;
    char name;

    for(r=1; r<=5; r++)
    {
        for(name='a'; name<='e'; name++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}