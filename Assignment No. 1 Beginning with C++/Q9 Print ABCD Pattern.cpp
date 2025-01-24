// Write a C++ program to print the following pattern.
// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    char letter = 'A'; 

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            cout << letter << " "; 
            letter++; 
        }
        cout << endl;
    }

    return 0;
}
