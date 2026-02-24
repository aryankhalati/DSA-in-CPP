#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int i = 0;
    while(i<=n)
    {
        if(n%2==0)
        cout<<i<<" ";
        i=i+2;
    }
    return 0;
}