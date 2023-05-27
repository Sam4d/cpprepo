#include<iostream>

using namespace std;
int main(){

    /* Loops in C++

    There are three types of loops in C++

    1) For loop
    2) While loop
    3) Do-While loop

    */
   
   int i = 2;
//    count<<i;
//    i++;

// ***code syntax: For loop***

// for(initialization; condition; updation)
//  {  
//      loop body(C++ Code);
//  }


// Example of a For Loop: 

//    for (int i = 1; i <= 400000; i++)
//    {
//     cout<<i<<endl;
    
//    }


// Example of an infinite for Loop: 

//    for (int i = 1; 34 <= 400; i++) (since 34 will always be less than 400, this is an infinite loop)
//    {
//     cout<<i<<endl;
    
//    }


// ***code syntax: While loop***

    // While(condition)
    // {
    //     C++ statements;
    // }

// Printing 1 to 40 using while loop: 
    
    // while(i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

// Example of an infinite while Loop: 

    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

// ***code syntax: do-while loop***

    // do
    // {
    //     C++ statements;
    // }while(condition);

// Example of a do while Loop: 

    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while(i<=40);

// Example of an infinite while Loop: 

    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while(true);


// Example of a multiplication table using while loop: 

    do{
        cout<<"6*"<<i<<"="<<i*6<<endl;
        i++;
    }while(i<=100000);



    return 0;
}