// Write a C++ program to accept ‘n’ float numbers, store them in an array and print the
// alternate elements of an array. (Use dynamic memory allocation)

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements
    cout << "Enter the number of float numbers to be stored: ";
    cin >> n;

    // Validate the input
    if (n <= 0) {
        cout << "Invalid number of elements. Please enter a positive number." << endl;
        return 0;
    }

    // Dynamically allocate memory for the array
    float* arr = new float[n];

    // Input the float numbers
    cout << "Enter " << n << " float numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display alternate elements
    cout << "\nAlternate elements in the array are:" << endl;
    for (int i = 0; i < n; i += 2) { // Skip every other element
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
