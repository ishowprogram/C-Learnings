// Write a C++ program to accept length and width of a rectangle. Calculate and display
// perimeter as well as area of a rectangle by using Inline function.

#include <iostream>
using namespace std;

// Inline function to calculate the area of a rectangle
inline float calculateArea(float length, float width) {
    return length * width;
}

// Inline function to calculate the perimeter of a rectangle
inline float calculatePerimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width;

    // Input length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Validate input
    if (length <= 0 || width <= 0) {
        cout << "Length and width must be positive numbers!" << endl;
        return 0;
    }

    // Calculate area and perimeter using inline functions
    float area = calculateArea(length, width);
    float perimeter = calculatePerimeter(length, width);

    // Display the results
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
