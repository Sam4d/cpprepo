# include<iostream>

using namespace std;
int glo = 6; // global variable
void sum(){
    int a;
}
int main(){
    int glo = 9; // local variable
    int a = 4;
    int b = 5;
    float pi = 3.14;
    char c = 'd';
    cout<<"This is a tutorial. Here the value of a is "<<a<<".\n The value of b is "<<b;
    cout<<"\n The value of pi is: "<<pi;
    cout<<"\n The value of c is: "<<c;
    cout<<"\n value of glo is: "<<glo;
    return 0;
}