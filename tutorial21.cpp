// *** Classes, Public and Private access modifiers in C++ ***


// We use classes over structures in cpp as there is no data hiding in structures

// You can access any value of any structure in cpp

// You can't add functions in structures, but you can in class.

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c; // they can't be accessed in your main fn 
    public:
        int d, e; // they can't be accessed in your main fn (eg: samad.d given below)

        void setData(int a1,int b1, int c1);  // Declaration (this is like promising the compiler that you're gonna give values of a, b & c later on)
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee samad;
    samad.d = 69;
    samad.e = 420;
    samad.setData(1,2,4);  // you'll get garbage values for d & e if you wouldn't have added values of them.
    samad.getData(); 
    return 0;
}