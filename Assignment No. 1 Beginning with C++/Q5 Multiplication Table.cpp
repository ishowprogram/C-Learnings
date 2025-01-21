// Write a C++ program to generate multiplication table.

#include<iostream>
using namespace std;

int main(){

    int bg;
    cout<<"Enter an Number to get its Multiplication Table"<<endl;
    cin>>bg;

    int i = 0;

    do
    {
        cout<<bg <<" * "<<i <<" = "<<i*bg<<endl;
        i = i + 1;
    } while (i<=10);
    
    return 0;
}