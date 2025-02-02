// Write a C++ program to calculate maximum and minimum of two integer numbers of two
// different classes.(Use friend function)

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
    friend void findMaxMin(ClassA, ClassB); // Friend function declaration
};

class ClassB {
private:
    int numB;
public:
    void setData(int b) {
        numB = b;
    }
    friend void findMaxMin(ClassA, ClassB); // Friend function declaration
};

// Friend function definition
void findMaxMin(ClassA objA, ClassB objB) {
    int maxVal = (objA.numA > objB.numB) ? objA.numA : objB.numB;
    int minVal = (objA.numA < objB.numB) ? objA.numA : objB.numB;
    
    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;
}

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
    
    findMaxMin(objA, objB);
    
    return 0;
}