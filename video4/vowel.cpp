#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter an alphabet : ";
    cin>>c;

    if(c=='o'||c=='a'||c=='i'||c=='e'||c=='u')
    {
       cout<<"It is a vowel";
    }
    else
    {
        cout<<"It is a consonant";
    }
    return 0;
}