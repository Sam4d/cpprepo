#include<iostream>
using namespace std;

// type function-name (arguments);

int sum(int a, int b); // function prototyping (tells program to find the sum even if it's below)
void g(void); // writing void inside the brackets is optional

int main(){
    int num1, num2;

    cout<<"Enter the value of first number: "<<endl;
    cin>>num1;
    cout<<"Enter the value of second number: "<<endl;
    cin>>num2;
    // num1 & num2 are actual parameters 

    // actual parameters are also known as arguements and formal parameters are called the parameters or the parameters required while function creation

    // you can also use a & b instead of num1 & num2 here and the formal & actual parameters will be the same.
    cout<<"The value of your two numbers = "<<sum(num1, num2);
    g();
    return 0;
    
}

int sum(int a, int b){  // a function we created (always create all functions before main(){} or they won't be recognized).
    int c = a+b;
    // formal parameters a & b will be taking values from actual parameters num1 & num2
    return c;
}

void g(){
    cout<<"\nThank you for using the calculator!";
}