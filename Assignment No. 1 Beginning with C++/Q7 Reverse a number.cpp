#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num; 

    // Reverse the number
    while (num != 0) {
        int digit = num % 10; 
        reversedNum = reversedNum * 10 + digit; 
        num = num / 10;                
    }

    cout << "The reverse of " << originalNum << " is " << reversedNum << "." << endl;

    return 0;
}
