#include<iostream>
using namespace std;


// This won't swap a & b (you need call by reference method for it)
// void swap(int a, int b){  //  temp  a   b
//     int temp = a;          //   4   4   5
//     a = b;                 //   4   5   5
//     b = temp;              //   4   5   4
// }

// This will swap a & b (call by reference method)
void swapPointer(int* a, int* b){   // temp  a   b
    int temp = *a;                  //   4   4   5
    *a = *b;                        //   4   5   5
    *b = temp;                      //   4   5   4
}

// // Call by reference (using pointers)
// void swapReferenceVar(int &a, int &b){  // temp  a   b
//     int temp = a;                       //   4   4   5
//     a = b;                              //   4   5   5
//     b = temp;                           //   4   5   4
// }

// Call by reference (C++ Method)
int & swapCPPVar(int &a, int &b){        // temp  a   b
    int temp = a;                       //   4   4   5
    a = b;                              //   4   5   5
    b = temp;                           //   4   5   4
    return a;
}


int main(){
    
    int a = 4, b = 5;
    cout<<"The value of a is: "<<a<<" And the value of b is: "<<b<<endl;
    // swap(a,b); // This will not swap a & b (since it makes a copy of the values)
    // swapPointer(&a,&b); // This will swap a & b (since you're changing the memory of a & b (via pointer ref))
    // swapReferenceVar(a,b); // This will swap a & b (via reference variables)
    swapCPPVar(a,b) = 420;
    cout<<"The value of a is: "<<a<<" And the value of b is: "<<b<<endl;

    return 0;
}