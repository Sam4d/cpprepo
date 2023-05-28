#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     if(i ==2){
    //         break;  // stops when the code reaches 2
    //     }
    //     cout<<i<<endl;
    // }  
    // return 0;

    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            continue; // skips 2
        }
        cout<<i<<endl;
    }
    
}