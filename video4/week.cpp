#include<iostream>
using namespace std;
int main()
{
    int w;
    cout<<"Enter number between 1 and 7 : ";
    cin>>w;

    if(w==1)
    {
        cout<<"It is Monday ";
    }
    else if(w==2)
    {
        cout<<"It is Tuesday ";
    }
    else if(w==3)
    {
        cout<<"It is Wednesday";
    }
    else if(w==4)
    {
        cout<<"It is Thursday ";
    }
    else if(w==5)
    {
        cout<<"It is Friday ";
    }
    else if(w==6)
    {
        cout<<"It is Saturday ";
    }
    else if(w==7)
    {
        cout<<"It is Sunday ";
    }
    else
    {
        cout<<"A week has only seven days idiot ";
    }
    return 0;
}