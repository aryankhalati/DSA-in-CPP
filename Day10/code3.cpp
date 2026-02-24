#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;

   int i = 1;
   cout<<"Factors are : ";
   while(i<=n)
   {
    
    if(n%i==0)
    cout<<i<<" ";
    i++;
   }
   return 0;
}