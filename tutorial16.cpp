#include<iostream>
using namespace std;

void swap(int a, int b){  //  temp  a   b
    int temp = a;          //   4   4   5
    a = b;                 //   4   5   5
    b = temp;              //   4   5   4
}

int main(){
    
    int a = 4, b = 5;
    cout<<"The value of a is: "<<a<<" And the value of b is: "<<b<<endl;
    swap(a,b);
    cout<<"The value of a is: "<<a<<" And the value of b is: "<<b<<endl;

    return 0;
}