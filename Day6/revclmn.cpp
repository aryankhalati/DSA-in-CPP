#include<iostream>
using namespace std;
int main()
{
    for(int r=1; r<=5; r++)
    {
        for(int c = 1; c<=5-(r-1); c++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}