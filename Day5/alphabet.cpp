#include<iostream>
using namespace std;
int main()
{
    int r,c;

    for(r=1; r<=5; r++)
    {
        char name = 'a' + (r-1);
        for(c=1; c<=5; c++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;

}