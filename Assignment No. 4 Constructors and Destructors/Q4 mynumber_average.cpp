// Write a C++ program to create a class ‘MyNumber’ with three data members of type
// integer. Create and initialize the object using default constructor, parameterized
// constructor and parameterized constructor with default value. Write a member function to
// display average of given three numbers for all objects.

#include <iostream>
using namespace std;

class MyNumber {
private:
    int num1, num2, num3;

public:
    // Default Constructor
    MyNumber() {
        num1 = num2 = num3 = 0;
    }
    
    // Parameterized Constructor with Default Value
    MyNumber(int a, int b, int c = 10) {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    
    // Function to calculate and display average
    void displayAverage() {
        float avg = (num1 + num2 + num3) / 3.0;
        cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << " | Average: " << avg << endl;
    }
};

int main() {
    MyNumber obj1; // Default constructor
    cout << "Default Constructor: ";
    obj1.displayAverage();
    
    MyNumber obj2(10, 20, 30); // Parameterized constructor
    cout << "Parameterized Constructor: ";
    obj2.displayAverage();
    
    MyNumber obj3(5, 15); // Parameterized constructor with default value
    cout << "Parameterized Constructor with Default Value: ";
    obj3.displayAverage();
    
    return 0;
}