// Write a C++ program to define power function to calculate x^y. (Use default value as 2
// for y)

#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function to calculate power with default value of y = 2
double power(double x, int y = 2) {
    return pow(x, y);
}

int main() {
    double base;
    int exponent;

    // Input the base
    cout << "Enter the base (x): ";
    cin >> base;

    // Ask the user if they want to provide the exponent
    char choice;
    cout << "Do you want to provide an exponent (y)? (y/n): ";
    cin >> choice;

    // If the user chooses to provide an exponent
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter the exponent (y): ";
        cin >> exponent;

        // Display the result
        cout << "Result: " << power(base, exponent) << endl;
    } else {
        // Use the default value of y = 2
        cout << "Result (using default y = 2): " << power(base) << endl;
    }

    return 0;
}
