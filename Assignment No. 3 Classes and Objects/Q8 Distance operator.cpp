// Write a C++ program to create a class Distance with data members feet and inches. Write
// member functions for the following:
// a. To accept distance
// b. To display distance
// c. To add two distance objects
// (Use object as a function argument and function returning object)

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void acceptDistance();
    void displayDistance() const;
    Distance addDistance(const Distance& d) const; // Function returning object
};

void Distance::acceptDistance() {
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
    
    if (inches >= 12) {
        feet += inches / 12;
        inches %= 12;
    }
}

void Distance::displayDistance() const {
    cout << feet << " feet " << inches << " inches" << endl;
}

Distance Distance::addDistance(const Distance& d) const {
    Distance temp;
    temp.feet = feet + d.feet;
    temp.inches = inches + d.inches;
    
    if (temp.inches >= 12) {
        temp.feet += temp.inches / 12;
        temp.inches %= 12;
    }
    return temp;
}

int main() {
    Distance d1, d2, sum;
    
    cout << "Enter first distance:" << endl;
    d1.acceptDistance();
    
    cout << "Enter second distance:" << endl;
    d2.acceptDistance();
    
    sum = d1.addDistance(d2);
    
    cout << "\nFirst Distance: ";
    d1.displayDistance();
    cout << "Second Distance: ";
    d2.displayDistance();
    cout << "Sum of Distances: ";
    sum.displayDistance();
    
    return 0;
}
