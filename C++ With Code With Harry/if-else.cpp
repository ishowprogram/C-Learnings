#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enter Your Age" << endl;
    cin >> age;

    if (age > 100)
    {
        cout << "invalid age";
    }
    else if (age >= 18)
    {
        cout << "you can Vote";
    }
    else
    {
        cout << "you cannont vote";
    }

    return 0;
}