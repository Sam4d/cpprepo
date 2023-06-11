#include<iostream>
using namespace std;

//fuction overloarding 
/* steps
1) first compiler matches conditions for the above functions, eg sum(a,b) will see if the initial function matches the conditions
2) if yes then it'll execute and run the function with first condition
3) if no (ex if it was a float) then it would convert int into float value*/

float sum(int a, int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b; 
}

int sum(int a, int b, int c){
    cout<<"Using function with three arguments"<<endl;
    return a+b+c; 
}

//calculates the volume of a cylinder  
int volume(double r, int h){
    return(3.14 * r * r *h);
}

// calculates the volume of a cube
int volume(int a){
    return(a*a*a);
}

// calculates the volume of a rectangle
int volume(int l, int b, int h){
    return(l*b*h);
}




int main(){
     
    cout<<"The sum of 3 & 6 is: "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 & 9 is: "<<sum(3,7,9)<<endl;
    cout<<"The volume of cylinder 3 & 7 is: "<<volume(3,7)<<endl;
    cout<<"The volume of cube 3 is: "<<volume(3)<<endl;
    cout<<"The volume of rectangle 3, 7 & 9 is: "<<volume(3,7,9)<<endl;

    return 0;
}