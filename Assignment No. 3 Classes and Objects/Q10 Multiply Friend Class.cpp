// Write a C++ program to calculate multiplication of two integer numbers of two different
// classes. (Use friend class)

#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int numA;
public:
    void setData(int a) {
        numA = a;
    }
    friend class Multiply; // Declaring Multiply as a friend class
};

class ClassB {
private:
    int numB;
public:
    void setData(int b) {
        numB = b;
    }
    friend class Multiply; // Declaring Multiply as a friend class
};

class Multiply {
public:
    static int getMultiplication(ClassA objA, ClassB objB) {
        return objA.numA * objB.numB;
    }
};

int main() {
    ClassA objA;
    ClassB objB;
    int num1, num2;
    
    cout << "Enter first integer: ";
    cin >> num1;
    objA.setData(num1);
    
    cout << "Enter second integer: ";
    cin >> num2;
    objB.setData(num2);
    
    cout << "Multiplication of both numbers: " << Multiply::getMultiplication(objA, objB) << endl;
    
    return 0;
}