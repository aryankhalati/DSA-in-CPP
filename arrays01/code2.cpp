#include<iostream>
using namespace std;

void printArray(string ch[], int size){
    cout<<"Printing starting 11"<<endl;
    for(int i = 0; i<size; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl<<"Starting 11 Printed"<<endl;
}

int main(){
    //    char ch[5] = {'a', 'r', 'y', 'a', 'n'};
    //    printArray(ch, 5);
    //    return 0;
    string plyr[11] = {"Courtois", "Carreras", "Huijsen", "Asencio", "Trent", "Bellingham", "Tchouameni", "Valverde", "Vincius", "Mbappe", "Guler"};
    printArray(plyr, 11);
    return 0;
}