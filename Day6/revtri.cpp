#include<iostream>
using namespace std;
int main()
{
    for(int r = 1; r<=5; r++)
    {
        for(int c = r; c>=1; c--)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}