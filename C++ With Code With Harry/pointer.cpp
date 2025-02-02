#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *x;
    x = &a; // stores address of a variable using "&" ;
    cout << a << endl;// this will print actual value of a ;
    cout << x << endl;// as mentioned this will print address of a ;    
    cout << *x << endl;// * is an dereferencing operator so it will be printing the value of a;

    return 0;
}