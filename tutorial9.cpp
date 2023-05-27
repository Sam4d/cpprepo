// C++ Control Structures

// 1) Sequence structure: Entry < Action 1 < Action 2 < Exit
// 2) Selection structure: Entry < (Condition) True or False < If true, then a1 ; If false then a2.
// 3) Loop structure: Entry < (Condition) True of False < If true, loop back to entry ; If false then exit.


// In order to model these structures, we use the following tools - 

// 1) If-Else Statement
// 2) If-Else ladder
// 3) Switch case

#include <iostream>

using namespace std;

// int main(){
//     int age;
//  //   cout<<"Hello World";
//     cout<<"What is your age?: "<<endl;
//     cin>>age;
//     if((age<18) && (age>0)){
//         cout<<"Sorry you can't come to my party"<<endl;
//     }
//     else if(age < 1){
//         cout<<"You're not even born yet bruh"<<endl;
//     }
//     else if(age ==18){
//         cout<<"Yay you can come to my party!"<<endl;
//     }
//     else{
//         cout<<"You can come to the party bro, gotchu"<<endl;
//     }

//     return 0;
// }

// Control Structure: Switch Case

int main(){
int age;
    cout<<"What is your age? "<<endl;
    cin>>age;

switch (age)
    {
case 18:
    cout<<"You're 18 brother!"<<endl;
    break;

case 23:
    cout<<"You're 23 brother!"<<endl;
    break;

case 12:
    cout<<"You're 12 brother!"<<endl;
    break;

case 19:
    cout<<"You're 19 brother!"<<endl;
    break;

default:
    cout<<"No special case, dumb age"<<endl;
    }
    
    cout<<"Done with the process"<<endl;
}
