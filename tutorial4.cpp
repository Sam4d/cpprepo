# include<iostream>

using namespace std;
int glo = 6; // global variable
void sum(){
    int a = 3;
    cout<< glo;
}
int main(){
    int glo = 9; // local variable
    int a = 4;
    int b = 5;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is a tutorial. Here the value of a is "<<a<<".\n The value of b is "<<b;
    // cout<<"\n The value of pi is: "<<pi;
    // cout<<"\n The value of c is: "<<c;
    // cout<<"\n value of glo is: "<<glo;
    return 0;
}