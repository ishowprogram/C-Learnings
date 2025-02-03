// Write a C++ program to create two classes Array1 and Array2 with an integer array as a
// data member. Write necessary member functions to accept and display array elements of
// both the classes. Find and display maximum of both the array. (Use Friend function)

#include <iostream>
using namespace std;

class Array2; // Forward declaration

class Array1 {
private:
    int arr1[5];
public:
    void acceptElements();
    void displayElements() const;
    friend int findMax(Array1, Array2);
};

class Array2 {
private:
    int arr2[5];
public:
    void acceptElements();
    void displayElements() const;
    friend int findMax(Array1, Array2);
};

void Array1::acceptElements() {
    cout << "Enter 5 elements for Array1: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
}

void Array1::displayElements() const {
    cout << "Array1 Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

void Array2::acceptElements() {
    cout << "Enter 5 elements for Array2: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }
}

void Array2::displayElements() const {
    cout << "Array2 Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int findMax(Array1 a1, Array2 a2) {
    int maxVal = a1.arr1[0];
    for (int i = 1; i < 5; i++) {
        if (a1.arr1[i] > maxVal)
            maxVal = a1.arr1[i];
    }
    for (int i = 0; i < 5; i++) {
        if (a2.arr2[i] > maxVal)
            maxVal = a2.arr2[i];
    }
    return maxVal;
}

int main() {
    Array1 a1;
    Array2 a2;
    
    a1.acceptElements();
    a2.acceptElements();
    
    a1.displayElements();
    a2.displayElements();
    
    cout << "Maximum element from both arrays: " << findMax(a1, a2) << endl;
    
    return 0;
}
