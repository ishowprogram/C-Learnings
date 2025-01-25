// Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from
// user and performs the corresponding arithmetic operation and display the result. (Use
// switch statement)

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << static_cast<float>(num1) / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}
