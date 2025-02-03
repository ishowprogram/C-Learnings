// Write a C++ program to create a class ‘Fraction’ with integer data members numerator
// and denominator. Create and initialize the object using parameterized constructor. Write a
// member function to display addition two fraction objects.(Use the concept of dynamic
// initialization of object)

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:
    // Parameterized Constructor
    Fraction(int num, int den) {
        numerator = num;
        denominator = den;
    }
    
    // Function to add two fractions
    Fraction add(const Fraction &f) {
        int num = (numerator * f.denominator) + (f.numerator * denominator);
        int den = denominator * f.denominator;
        return Fraction(num, den);
    }
    
    // Function to display fraction
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    int num1, den1, num2, den2;
    
    cout << "Enter numerator and denominator for first fraction: ";
    cin >> num1 >> den1;
    
    cout << "Enter numerator and denominator for second fraction: ";
    cin >> num2 >> den2;
    
    Fraction *frac1 = new Fraction(num1, den1); // Dynamic initialization
    Fraction *frac2 = new Fraction(num2, den2);
    
    Fraction sum = frac1->add(*frac2);
    
    cout << "Sum of fractions: ";
    sum.display();
    
    delete frac1;
    delete frac2;
    
    return 0;
}