#include<iostream>

using namespace std;

int c = 200; // global variable
float d = 34.4;


int main(){
    // int a, b, c;
    // cout<<"enter value of a: "<<endl;
    // cin>>a;
    // cout<<"enter value of b: "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"the sum of a + b is: "<<c<<endl;
    // cout<<"the global sum of c is: "<<::c; 
    // // we use two (::) in order to use the scope resolution to pick value of global variable.

    float d = 34.4f; 
    // the f after 34.4 denotes the value as float (it's long by default in cpp)
    long double e = 34.4l;
    // the l after 34.4 denotes value as long
    cout<<"The value of d is: "<<d<<endl<<"the Value of e is: "<<e<<endl;

    cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl; // double variable by default
    cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl; // float variable
    cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl; // doesn't matter if f is lower or upper case
    cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl; // long variable
    cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl; //doesn't matter if L is lower or upper case




    return 0;
}