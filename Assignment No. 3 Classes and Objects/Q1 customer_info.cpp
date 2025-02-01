// Write a C++ program to create a class Customer with data members ID, Name, Addr and
// Contact_No. Write member functions to accept and display customer information. (Use
// scope resolution operator while defining member functions) 

#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int ID;
    string Name;
    string Addr;
    string Contact_No;

public:
    void acceptDetails();
    void displayDetails() const;
};

// Defining member functions using scope resolution operator
void Customer::acceptDetails() {
    cout << "Enter Customer ID: ";
    cin >> ID;
    cin.ignore();
    
    cout << "Enter Name: ";
    getline(cin, Name);
    
    cout << "Enter Address: ";
    getline(cin, Addr);
    
    cout << "Enter Contact Number: ";
    getline(cin, Contact_No);
}

void Customer::displayDetails() const {
    cout << "\nCustomer Details:" << endl;
    cout << "ID: " << ID << endl;
    cout << "Name: " << Name << endl;
    cout << "Address: " << Addr << endl;
    cout << "Contact Number: " << Contact_No << endl;
}

int main() {
    Customer cust;
    cust.acceptDetails();
    cust.displayDetails();
    
    return 0;
}
