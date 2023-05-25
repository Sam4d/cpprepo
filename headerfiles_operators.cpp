#include<iostream> //this is a header that comes with compiler
//#include"this.h" // this is header that can be made by the user (you need to create a file called this.h in order to use it.)


// Press the keyboard shortcut Ctrl + / (Windows/Linux) to add/remove multiple comments.

using namespace std;

    int main(){
        int a = 3;
        int b = 2;

        cout<<"The value of a + b = "<<a+b<<endl;
        cout<<"The value of a - b = "<<a-b<<endl;
        cout<<"The value of a * b = "<<a*b<<endl;
        cout<<"The value of a / b = "<<a/b<<endl;
        cout<<"The value of a % b = "<<a%b<<endl;
        cout<<"The value of a + b = "<<a+b<<endl;
        cout<<"The value of a ++ = "<<a++<<endl;
        cout<<"The value of a -- = "<<a--<<endl;
        cout<<"The value of ++ a = "<<++a<<endl;
        cout<<"The value of -- a = "<<--a<<endl;

//      The function "a+b", will add a and b values and print them.
//      The function "a-b "will subtract a and b values and print them.
//      The function "a*b" will multiply a and b values and print them.
//      The function "a/b ", will divide a and b values and print them.
//      The function "a%b ", will take the modulus of a and b values and print them.
//      The function "a++" will first print the value of a and then increment it by 1.
//      The function "a--", will first print the value of a and then decrement it by 1.
//      The function "++a", will first increment it by one and then print its value.
//      The function "--a", will first decrement it by one and then print its value.

// comparison operators

        cout<<"The following are the comparison operators in C++: "<<endl;
        cout<<"The value of a == b is: "<<(a==b)<<endl;
        cout<<"The value of a < b is: "<<(a<b)<<endl;
        cout<<"The value of a > b is: "<<(a>b)<<endl;
        cout<<"The value of a <= b is: "<<(a<=b)<<endl;
        cout<<"The value of a >= b is: "<<(a>=b)<<endl;
        cout<<"The value of a != b is: "<<(a!=b)<<endl; 
        cout<<endl;
        
// logical operators

        cout<<"The following are the logical operators in C++: "<<endl;
        cout<<"The value of a == b AND a>b is: "<<((a==b) && (a>b))<<endl; // logical 'and' operator
        cout<<"The value of a == b OR a>b is: "<<((a==b) || (a>b))<<endl; // logical 'or' operator
        cout<<"The value of NOT a == b is: "<<(!(a==b))<<endl; // not'(!) operator

//  there are also bitwise operators which are yet to come in future tutorials

        return 0;
    }




