//Array stores only same type of elements

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Array Printed"<<endl;
}

int main()
{
    int arr1[5] = {12,34,54,28,9};
    printArray(arr1, 5);
    
    int arr2[10]= {0};
    printArray(arr2, 10);
    
    int arr3[7] = {7,10};
    printArray(arr3, 7);
    
    return 0;
}