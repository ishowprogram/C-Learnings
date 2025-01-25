// Write a C++ program to perform increment and decrement operation on integer number.
// (Use inline function)

#include <iostream>
using namespace std;

inline int increment(int number) {
    return ++number;
}

inline int decrement(int number) {
    return --number;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "After increment: " << increment(num) << endl;
    cout << "After decrement: " << decrement(num) << endl;

    return 0;
}
