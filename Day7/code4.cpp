#include<iostream>
using namespace std;
int main()
{
    char ch;
    int r,c;

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=5-r; c++)
        {
            cout<<" ";
        }
        for(ch = 'a'; ch<='a' + r - 1; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}