#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int count = 1;

    for(r=1; r<=5; r++)
    {
        for(c=1;c<=5;c++)
        {
            cout<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
    }
    return 0;
}