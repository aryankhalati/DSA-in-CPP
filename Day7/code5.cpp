#include<iostream>
using namespace std;
int main()
{
    int r,c;

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=5-r; c++)
        {
            cout<<" ";
        }
        for(c=r; c>=1; c--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;

}