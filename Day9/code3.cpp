//Logical Operators
#include<iostream>
using namespace std;
int main()
{
    //AND & NOT operator
 //   int year;
 //  cout<<"Enter a year : ";
 //   cin>>year;

 //   if(year%4==0 && year%100!=0)
 //   {
 //       cout<<"It is a leap year";
 //   }
  //  else
   // {
  //      cout<<"It is not a leap year";
  //  }
    //OR operator
  char ch;
  cout<<"Enter an alphabet : ";
  cin>>ch;

  if(ch=='a'|| ch=='e' || ch=='i'  || ch=='o' || ch=='u')
  {
    cout<<"It is a vowel";
  }
  else{
    cout<<"It is not a vowel";
  }
    return 0;
}