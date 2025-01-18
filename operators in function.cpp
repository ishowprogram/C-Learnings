#include<iostream>
using namespace std;

int add(int a , int b){
    int a1;
    a1 = a + b;
    return a1 ; 
}
int minn(int a , int b){
    int b1;
    b1 = a - b;
    return b1 ; 
}
int mul(int a , int b){
    int c1;
    c1 = a * b;
    return c1 ;
}
int divv(int a , int b){
    int d1;
    d1 = a / b;
    return d1 ;
}


int main(){
    
    int a,b;
    cout<<"Enter Number 1"<<endl;
    cin>>a;
    cout<<"Enter Number 2"<<endl;
    cin>>b;

    cout<<"the addition of given numbers is "<<add(a,b)<<endl;
    cout<<"the subtraction of given numbers is "<<minn(a,b)<<endl;
    cout<<"the Multiplication of given numbers is "<<mul(a,b)<<endl;
    cout<<"the Dividation of given numbers is "<<divv(a,b)<<endl;
    return 0;
}