#include <iostream>
#include <iomanip> 
using namespace std;

inline float add(float a, float b) {
    return a + b;
}

inline float subtract(float a, float b) {
    return a - b;
}

inline float multiply(float a, float b) {
    return a * b;
}

inline float divide(float a, float b) {
    return (b != 0) ? (a / b) : 0; 
}

int main() {
    float num1, num2;

    cout << "Enter two float numbers: ";
    cin >> num1 >> num2;

    cout << fixed << setprecision(2); 
    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;

    if (num2 != 0) {
        cout << "Division: " << divide(num1, num2) << endl;
    } else {
        cout << "Division: Error! Division by zero is not allowed." << endl;
    }

    return 0;
}
