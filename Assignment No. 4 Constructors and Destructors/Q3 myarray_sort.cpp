// Write a C++ program to create a class ‘MyArray’ which contains single dimensional
// integer array of given size. Write a member function to display array in ascending order.
// (Use Dynamic Constructor to allocate and Destructor to free memory of an object)

#include <iostream>
#include <algorithm>
using namespace std;

class MyArray {
private:
    int *arr;
    int size;

public:
    // Dynamic Constructor
    MyArray(int s) {
        size = s;
        arr = new int[size];
    }
    
    // Function to accept array elements
    void acceptElements() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    
    // Function to display array in ascending order
    void displaySorted() {
        sort(arr, arr + size);
        cout << "Sorted Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    // Destructor to free memory
    ~MyArray() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    MyArray myArr(n);
    myArr.acceptElements();
    myArr.displaySorted();
    
    return 0;
}