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
    
    // Parameterized Constructor
    MyNumber(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    
    // Copy Constructor
    MyNumber(const MyNumber &obj) {
        num1 = obj.num1;
        num2 = obj.num2;
        num3 = obj.num3;
    }
    
    // Display Function
    void display() {
        cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    }
};

int main() {
    MyNumber obj1; // Default constructor
    cout << "Default Constructor: ";
    obj1.display();
    
    MyNumber obj2(10, 20, 30); // Parameterized constructor
    cout << "Parameterized Constructor: ";
    obj2.display();
    
    MyNumber obj3 = obj2; // Copy constructor
    cout << "Copy Constructor: ";
    obj3.display();
    
    return 0;
}