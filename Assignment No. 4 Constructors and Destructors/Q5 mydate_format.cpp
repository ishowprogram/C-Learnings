// Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy.
// Create and initialize the object by using parameterized constructor and display date in ddmon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014).(Use the concept of dynamic
// initialization of object)

#include <iostream>
#include <string>
using namespace std;

class MyDate {
private:
    int dd, mm, yyyy;
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

public:
    // Parameterized Constructor
    MyDate(int day, int month, int year) {
        dd = day;
        mm = month;
        yyyy = year;
    }
    
    // Function to display date in dd-Mon-yyyy format
    void displayDate() {
        if(mm >= 1 && mm <= 12) {
            cout << dd << "-" << months[mm - 1] << "-" << yyyy << endl;
        } else {
            cout << "Invalid month!" << endl;
        }
    }
};

int main() {
    int day, month, year;
    cout << "Enter date (dd mm yyyy): ";
    cin >> day >> month >> year;
    
    MyDate *date = new MyDate(day, month, year); // Dynamic initialization
    date->displayDate();
    
    delete date; // Free allocated memory
    return 0;
}
