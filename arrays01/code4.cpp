#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5] = {1983, 2026, 2007, 2011, 2024};
    int ans = INT_MIN;

    for(int i = 0; i<5; i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout<<ans;

    return 0;

}