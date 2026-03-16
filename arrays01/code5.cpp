#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    int sum = 0;
    for(int i = 0; i<7; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<7; i++)
    {
        sum = sum + arr[i];

    }
    cout<<"Trophies won by your club are "<<sum;

    return 0;

}