#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    int first = 0, second = 1;

    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " "; 
        int next = first + second;
        first = second; 
        second = next; 

    cout << endl;
    return 0;
}
