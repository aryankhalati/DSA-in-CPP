#include<iostream>
using namespace std;

bool search(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {2024, 2018, 2017, 2014, 2022, 2016, 2002};

    cout<<"Enter the year you want  : ";

    int key;
    cin>>key;

    bool found = search(arr, 7, key);

    if(found)
    {
        cout<<key<<" is present "<<endl;
    }
    else 
    {
        cout<<key<<" is absent "<<endl;
    }

   return 0;
    

}