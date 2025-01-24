// Write a C++ program to convert decimal number into binary number


#include <iostream>
using namespace std;

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    if (decimalNumber < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    int binary[32]; 
    int index = 0;

    if (decimalNumber == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }

    while (decimalNumber > 0) {
        binary[index] = decimalNumber % 2; 
        decimalNumber = decimalNumber / 2; 
        index++;
    }

    cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
