#include<iostream>

using namespace std;

int c = 200; // global variable
float d = 34.4;


int main(){
    int a, b, c;
    cout<<"enter value of a: "<<endl;
    cin>>a;
    cout<<"enter value of b: "<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum of a + b is: "<<c<<endl;
    cout<<"the global sum of c is: "<<::c; 
    // we use two (::) in order to use the scope resolution to pick value of global variable.


    return 0;
}