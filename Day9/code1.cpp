#include<iostream>
using namespace std;
int main()
{
    int a1 = 9;
    int a2 = 9;
    int a3 = 9;
    int a4 = 9;
    int b = a1++;
    cout<<"b = "<<b<<" "<<"a = "<<a1<<endl;  //Post Increment
    int c = ++a2;
     cout<<"c = "<<c<<" "<<"a = "<<a2<<endl;  //Pre Increment
    int d = --a3;
     cout<<"d = "<<d<<" "<<"a = "<<a3<<endl; //Pre Decrement
    int e = a4--;
     cout<<"e = "<<e<<" "<<"a = "<<a4<<endl;  //Post Decrement
}