// Arrays in C++

/* What is an Array? Collection of items of similar types stored in contigious memory locations.
- Sometimes a simple variable is not enough to hold all the data */

#include<iostream>
using namespace std;

int main(){
    int marks [4] = {23, 45, 56, 89};  //example of an array in C++
    int mathmarks [4];

    mathmarks [0] = 434;
    mathmarks [1] = 323;
    mathmarks [2] = 545;
    mathmarks [3] = 532;

    cout<<"These are your marks!"<<endl;


    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // marks[2] = 666;  // an array's value can be changed if you edit it later on (before it prints)
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // cout<<"These are your math marks!"<<endl;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of your marks "<<i<<" is: "<<marks[i]<<endl;
    // }

    // int count = 0;

    // while (count < 4)
    // {
    //     cout<<" the value of your marks"<<count<<" is "<<marks[count]<<endl;
    //     count++;
    // }
    
    int i = 0;
    do
    {
        cout<<"The value of your marks: "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    

    return 0;
}
