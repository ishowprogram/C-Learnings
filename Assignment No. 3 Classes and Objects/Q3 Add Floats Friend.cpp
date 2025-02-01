// Write a C++ program to add two float numbers of two different classes using friend
// function.


#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    float numA;
public:
    void setData(float a) {
        numA = a;
    }
    friend float addNumbers(ClassA, ClassB); // Friend function declaration
};

class ClassB {
private:
    float numB;
public:
    void setData(float b) {
        numB = b;
    }
    friend float addNumbers(ClassA, ClassB); // Friend function declaration
};

// Friend function definition
float addNumbers(ClassA objA, ClassB objB) {
    return objA.numA + objB.numB;
}

int main() {
    ClassA objA;
    ClassB objB;
    float num1, num2;
    
    cout << "Enter first float number: ";
    cin >> num1;
    objA.setData(num1);
    
    cout << "Enter second float number: ";
    cin >> num2;
    objB.setData(num2);
    
    cout << "Sum of the two numbers: " << addNumbers(objA, objB) << endl;
    
    return 0;
}