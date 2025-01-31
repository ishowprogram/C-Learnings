// 1. Create a C++ program to maintain inventory of a book having details Title, Authors[],
// Price, Publisher and Stock. Book can be sold, if stock is available, otherwise purchase will be
// made. Write a menu driven program to perform following operation:
//  Accept book details.
//  Sale a book. (Sale contains number of copies to be sold.)
//  Purchase a book. (Purchase contains number of copies to be purchased)
// (Use dynamic memory allocation while accepting author details).

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string* authors;
    int num_authors;
    double price;
    string publisher;
    int stock;

public:
    Book() : authors(nullptr), num_authors(0), price(0.0), stock(0) {}

    void acceptDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        
        cout << "Enter number of authors: ";
        cin >> num_authors;
        cin.ignore();
        
        authors = new string[num_authors];
        for (int i = 0; i < num_authors; i++) {
            cout << "Enter author " << i + 1 << ": ";
            getline(cin, authors[i]);
        }
        
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();
        
        cout << "Enter publisher: ";
        getline(cin, publisher);
        
        cout << "Enter stock: ";
        cin >> stock;
        cin.ignore();
    }

    void sellBook(int copies) {
        if (copies <= stock) {
            stock -= copies;
            cout << "Book sold successfully! Remaining stock: " << stock << endl;
        } else {
            cout << "Not enough stock available!" << endl;
        }
    }

    void purchaseBook(int copies) {
        stock += copies;
        cout << "Book purchased successfully! Updated stock: " << stock << endl;
    }

    void displayDetails() {
        cout << "\nBook Details:\n";
        cout << "Title: " << title << endl;
        cout << "Authors: ";
        for (int i = 0; i < num_authors; i++) {
            cout << authors[i];
            if (i < num_authors - 1) cout << ", ";
        }
        cout << endl;
        cout << "Price: " << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << endl;
    }

    ~Book() {
        delete[] authors;
    }
};

int main() {
    Book book;
    int choice, copies;
    
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Accept book details\n";
        cout << "2. Sell a book\n";
        cout << "3. Purchase a book\n";
        cout << "4. Display book details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                book.acceptDetails();
                break;
            case 2:
                cout << "Enter number of copies to sell: ";
                cin >> copies;
                book.sellBook(copies);
                break;
            case 3:
                cout << "Enter number of copies to purchase: ";
                cin >> copies;
                book.purchaseBook(copies);
                break;
            case 4:
                book.displayDetails();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}