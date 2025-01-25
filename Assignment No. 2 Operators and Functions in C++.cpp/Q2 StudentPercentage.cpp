// Write a C++ program to store percentage of ‘n’ students and display it where ‘n’ is the
// number of students entered by the user.(Use new and delete operator)

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students. Please enter a positive number." << endl;
        return 0;
    }

    float* percentages = new float[n];

    cout << "Enter the percentages of " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> percentages[i];
    }

    cout << "\nPercentages of students:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << percentages[i] << "%" << endl;
    }

    delete[] percentages;

    return 0;
}
