//  Q. Write a C++ program to check whether a given number is even or odd.

#include<iostream>
using namespace std;

int main(){

    int number ;

    cout<<"enter an number"<<endl;
    cin>>number;

    if (number % 2 == 0)
    {
        cout<<"Entered number is positive";
    }
    else
    {
        cout<<"Entered number is negative";
    }


    return 0;
}

