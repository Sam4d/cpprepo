#include<iostream>
using namespace std;

// structures are used to store multiple variables under one variable: eg - Employee (ID, Salary & FavChar)
typedef struct employee // type def is only used here so we can use shortcut for employee as ep (on line 10)
{
    /* data */
    int eId;
    char FavChar;
    float salary;
}ep;

union money /* unions are used when you only need one option out of the following variables
, this allows C++ to optimize memory and manage better memory = eg - the max memory required here to be
used will be 4 bytes max instead of the total 9 which structure would've used instead */

{
    int rice; // 4
    char car; // 1
    float points; // 4
};


int main(){

    // enums are used to allocate values to variables, they start from 0 (breakfast = 0, lunch = 1, dinner = 2)
    
    enum Meal {breakfast, lunch, dinner}; 
    Meal m1 = lunch;
    cout<<m1;
    
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;


    // union money m1;
    // m1.rice = 34;
    // m1.car = 'C';
    // cout<<m1.rice<<endl; // you'll get a garbage value as you declared m1.car later on.

    
    // ep samad; // using ep shortcut 
    // struct employee aiman; // without using ep shortcut
    // samad.eId = 6;
    // samad.FavChar = 'S';
    // samad.salary = 69420;



    // cout<<"The value of Samad's ID is "<<samad.eId<<endl;
    // cout<<"The value of Samad's FavChar is "<<samad.FavChar<<endl;
    // cout<<"The value of Salary is "<<samad.salary<<endl;


    return 0;
}