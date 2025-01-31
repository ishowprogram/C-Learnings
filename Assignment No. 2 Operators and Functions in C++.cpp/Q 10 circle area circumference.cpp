// Write a C++ program to calculate area and circumference of a Circle. (Use default
// argument, scope resolution operator and manipulator.) 

#include <iostream>
#include <iomanip>
using namespace std;

class Circle {
private:
    double radius;
    static constexpr double PI = 3.14159; // Using scope resolution operator for constant

public:
    Circle(double r = 1.0) { // Default argument
        radius = r;
    }
    
    double area() {
        return PI * radius * radius;
    }
    
    double circumference() {
        return 2 * PI * radius;
    }
};

int main() {
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;
    
    Circle c(r);
    
    cout << fixed << setprecision(2); // Using manipulator to set precision
    cout << "Area of Circle: " << c.area() << endl;
    cout << "Circumference of Circle: " << c.circumference() << endl;
    
    return 0;
}