#include <iostream>
using namespace std;

int main() {
    int number;
    long int factorial = 1; // Using long int to store the factorial result

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
    else {
        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
        cout << "The factorial of " << number << " is " << factorial << "." << endl;
    }

    return 0;
}
