#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-2) + fib(n-1);

}

// int factorial(int n){
//     if (n<=1){
//         return 1; 
//     }
//     return n*factorial(n-1);
// }

    // ***Step by step calculation of factorial 4***

    // factorial(4) = 4 * factorial(3);
    // factorial(4) = 4 * 3 factorial(2);
    // factorial(4) = 4 * 3 * 2 factorial(1);
    // factorial(4) = 4 * 3 * 2 * 1;
    // factorial(4) = 24;

int main(){
    
    // Factorial of a number: 
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition and so on...
    // n! = n * (n-1)!
    
    // int a;
    // cout<<"Enter a number: "<<endl;
    // cin>>a;
    // cout<<"The factorial of "<<a<<" is: "<<factorial(a)<<endl;

    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"The fibonacci sequence of "<<a<<" is: "<<fib(a)<<endl;

    return 0;
}