// Write a C++ program to create a class Student with data members Roll_No,
// Student_Name, Class. Write member functions to accept and display Student information
// also display count of students. (Use Static data member and Static member function)

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int Roll_No;
    string Student_Name;
    string Class;
    static int studentCount; // Static data member

public:
    void acceptDetails();
    void displayDetails() const;
    static void displayCount(); // Static member function
};

// Initializing static data member
int Student::studentCount = 0;

// Defining member functions
void Student::acceptDetails() {
    cout << "Enter Roll Number: ";
    cin >> Roll_No;
    cin.ignore();
    
    cout << "Enter Student Name: ";
    getline(cin, Student_Name);
    
    cout << "Enter Class: ";
    getline(cin, Class);
    
    studentCount++; // Increment count on new student entry
}

void Student::displayDetails() const {
    cout << "\nStudent Details:" << endl;
    cout << "Roll Number: " << Roll_No << endl;
    cout << "Name: " << Student_Name << endl;
    cout << "Class: " << Class << endl;
}

void Student::displayCount() {
    cout << "\nTotal number of students: " << studentCount << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();
    
    Student students[n]; // Array of objects
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
        students[i].acceptDetails();
    }
    
    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
    }
    
    Student::displayCount(); // Display total count using static member function
    
    return 0;
}
