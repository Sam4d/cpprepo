#include<iostream>

using namespace std;

int c = 200; // global variable
float d = 34.4;


int main(){
    
    // // *** Build in Data Types***

    // int a, b, c;
    // cout<<"enter value of a: "<<endl;
    // cin>>a;
    // cout<<"enter value of b: "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"the sum of a + b is: "<<c<<endl;
    // cout<<"the global sum of c is: "<<::c; 
    // // we use two (::) in order to use the scope resolution to pick value of global variable.

    // // ***Float, Double & Long literals***

    // float d = 34.4f; 
    // // the f after 34.4 denotes the value as float (it's long by default in cpp)
    // long double e = 34.4l;
    // // the l after 34.4 denotes value as long
    // cout<<"The value of d is: "<<d<<endl<<"the Value of e is: "<<e<<endl;

    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl; // double variable by default
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl; // float variable
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl; // doesn't matter if f is lower or upper case
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl; // long variable
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl; //doesn't matter if L is lower or upper case


    // // ***Reference Variable***

    // // To assign multiple variables to a single value

    // int x = 44;
    // int & y = x; 
    // cout<<"The value of x is: "<<x<<endl;
    // cout<<"The value of y is: "<<y<<endl;


    // //*** Typecasting ***

    // // to change the type of variable into anything else

    int x = 34;
    float y = 43.45;

    cout<<"The value of x is: "<<(float)x<<endl;
    cout<<"The value of x is: "<<float(x)<<endl;

    cout<<"The value of y is: "<<(int)y<<endl;
    cout<<"The value of y is: "<<int(y)<<endl;

    // doesn't matter in whichever way you'd like to use the bracket.

    cout<<"The value of x + y (float) is: "<<x + y<<endl; // float by default
    cout<<"The value of x + y (int) is: "<<x + int(y)<<endl; // both are the same.
    cout<<"The value of x + y (int) is: "<<x + (int)y<<endl; // both are the same.


    return 0;
}