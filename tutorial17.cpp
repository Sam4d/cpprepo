#include<iostream>
using namespace std;

inline int product(int a, int b){  // optimization technique which function that gets copied and pasted directly into the code wherever it is called, making the program run faster.
    // do not use inline & static variables together (below lines)
    // static int c = 0;
    // c = c + 1; // Next time this function runs, the value of c will be retained  
    return a*b;   // write a*b+c; in order to add the static variable
}

float moneyReceived(int currentMoney, float factor=1.04){ // float factor is a default argument, always write default argument in the end (else you'll have an error)
    return currentMoney*factor; 
}

// int main(){
//     int a, b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"The sum of a & b is "<<product(a,b)<<endl;
//     cout<<"The sum of a & b is "<<product(a,b)<<endl;
//     cout<<"The sum of a & b is "<<product(a,b)<<endl;
//     cout<<"The sum of a & b is "<<product(a,b)<<endl;
//     cout<<"The sum of a & b is "<<product(a,b)<<endl;
//     cout<<"The sum of a & b is "<<product(a,b)<<endl;
    
//     return 0;
// }

// Example of a default function
int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" after one year"<<endl;
    cout<<"If you're a VIP & have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" after one year"; // by default you were supposed to get 104000 as output but since you gave your own value, it overwrites the default value and gives a different output

    return 0;
}


// Example of a constant function
int strlen(const char *p){

}