#include<iostream>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter a number : ";
    cin>>n;

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n-r; c++)
        {
            cout<<" ";
        }
        for(c=1; c<=r; c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
    
}