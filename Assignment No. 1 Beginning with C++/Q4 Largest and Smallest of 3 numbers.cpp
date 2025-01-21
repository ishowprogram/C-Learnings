// Write a C++ program to find largest and smallest number of 3 integer numbers. (Use cascading of I/O operators.)

#include<iostream>
using namespace std;

int main(){

int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

// largest 
    int largest;
    if (num1 > num2 && num1 > num3) {
        largest = num1;
    } else if (num2 > num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // smallest
    int smallest;
    if (num1 < num2 && num1 < num3) {
        smallest = num1;
    } else if (num2 < num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

return 0;
}