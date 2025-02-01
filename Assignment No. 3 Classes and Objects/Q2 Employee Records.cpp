// Write a C++ program to create a class Employee with data members Emp_id, Name,
// department, date_of_joining and Salary. Write member functions to accept and display
// details of ‘n’ employees. (Use array of objects)

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int Emp_id;
    string Name;
    string Department;
    string Date_of_joining;
    double Salary;

public:
    void acceptDetails();
    void displayDetails() const;
};

// Defining member functions using scope resolution operator
void Employee::acceptDetails() {
    cout << "Enter Employee ID: ";
    cin >> Emp_id;
    cin.ignore();
    
    cout << "Enter Name: ";
    getline(cin, Name);
    
    cout << "Enter Department: ";
    getline(cin, Department);
    
    cout << "Enter Date of Joining (DD/MM/YYYY): ";
    getline(cin, Date_of_joining);
    
    cout << "Enter Salary: ";
    cin >> Salary;
    cin.ignore();
}

void Employee::displayDetails() const {
    cout << "\nEmployee Details:" << endl;
    cout << "ID: " << Emp_id << endl;
    cout << "Name: " << Name << endl;
    cout << "Department: " << Department << endl;
    cout << "Date of Joining: " << Date_of_joining << endl;
    cout << "Salary: " << Salary << endl;
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();
    
    Employee employees[n]; // Array of objects
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        employees[i].acceptDetails();
    }
    
    cout << "\nDisplaying Employee Details:\n";
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }
    
    return 0;
}