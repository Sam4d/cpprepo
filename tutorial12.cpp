#include<iostream>
using namespace std;

int main(){
    // what is a pointer? a data type - one which holds the address of other data types

    int a = 3;
    int* b = &a; // & -> (address of) operator.

    cout<<"The address of a is: "<<b<<endl; // prints the memory address assigned to a (address is stored in ram)
    cout<<"The address of a is: "<<&a<<endl;

    cout<<"The address of b is: "<<*b<<endl; // -> (value at) dereferencing operator.

    // pointer to pointer
    int** c = &b;
    cout<<"The value of b is: "<<&b<<endl;
    cout<<"The value of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;


    return 0;
}