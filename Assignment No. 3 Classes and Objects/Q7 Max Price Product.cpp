// Write a C++ program using class to accept and display ‘n’ Products information, also
// display information of a product having maximum price. (Use array of objects and
// dynamic memory allocation)

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    float price;

public:
    void acceptDetails();
    void displayDetails() const;
    float getPrice() const;
};

void Product::acceptDetails() {
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, name);
    
    cout << "Enter product price: ";
    cin >> price;
}

void Product::displayDetails() const {
    cout << "\nProduct Name: " << name << endl;
    cout << "Price: " << price << endl;
}

float Product::getPrice() const {
    return price;
}

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    
    Product* products = new Product[n]; // Dynamic memory allocation
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Product " << i + 1 << ":" << endl;
        products[i].acceptDetails();
    }
    
    Product* maxProduct = &products[0];
    for (int i = 1; i < n; i++) {
        if (products[i].getPrice() > maxProduct->getPrice()) {
            maxProduct = &products[i];
        }
    }
    
    cout << "\nDisplaying Product Details:\n";
    for (int i = 0; i < n; i++) {
        products[i].displayDetails();
    }
    
    cout << "\nProduct with Maximum Price:";
    maxProduct->displayDetails();
    
    delete[] products; // Free allocated memory
    return 0;
}
