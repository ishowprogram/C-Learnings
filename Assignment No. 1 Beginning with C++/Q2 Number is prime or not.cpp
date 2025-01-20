#include<iostream>
using namespace std;

int main (){

    int number;
    int i ;
    bool isPrime = true;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = false; // A divisor is found
                break;
            }
        }

        if (isPrime) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }

    return 0;
}