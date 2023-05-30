#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    // int a = 34;
    // char c = 'd';
    
    // a = 45;
    // c = 'e';

    // cout<<"The value of a was: "<<a<<endl;
    // cout<<"The value of c was: "<<c<<endl;
    // return 0;

// constant in C++

// const int a = 69;
// cout<<"The value of a is: "<<a<<endl;

// a = 44; // we get this error because we already declared the value of a as 69 but constant.

// Another manipulator (setw) - this is used to right justify your code in C++ (RHS)

int x = 33,y = 7, z = 4324;

cout<<"The value of x is ="<<x<<endl;
cout<<"The value of y is ="<<y<<endl;
cout<<"The value of z is ="<<z<<endl;

cout<<"The value of x with setw is ="<<setw(4)<<x<<endl;
cout<<"The value of y with setw is ="<<setw(4)<<y<<endl;
cout<<"The value of z with setw is ="<<setw(4)<<z<<endl;

}