#include<iostream>
using namespace std;
int main()
{
    for(int r = 5; r>=1; r--)
    {
        for(int c = 5; c>=r; c--)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}