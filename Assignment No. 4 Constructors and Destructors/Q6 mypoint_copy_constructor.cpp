#include <iostream>
using namespace std;

class MyPoint {
private:
    int x, y;

public:
    // Default Constructor
    MyPoint() {
        x = 0;
        y = 0;
    }
    
    // Parameterized Constructor
    MyPoint(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }
    
    // Copy Constructor
    MyPoint(const MyPoint &p) {
        x = p.x;
        y = p.y;
    }
    
    // Function to display point
    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    MyPoint p1(10, 20); // Parameterized constructor
    cout << "Original Object: ";
    p1.display();
    
    MyPoint p2 = p1; // Copy constructor
    cout << "Copied Object: ";
    p2.display();
    
    return 0;
}
