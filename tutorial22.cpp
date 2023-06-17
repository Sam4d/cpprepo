#include <iostream>
#include <string>
using namespace std;

   // C++ was originally called C with classes by Bjarne Stroustroup
    // Class is an extension of structures (in C)
    // By default every value is public in structures
    // Structures had limitations
    //     - Members are public
    //     - Can't add methods

    // Classes = Structures + more
    // Classes can have methods & properties
    // Classes can make few members as private & few as public (if you want)
    // Structures in C++ are typedefed
    // You can declare objects along with class declaration like this (not recommended tho)

    //     class Employee{
    //         //  Class definition;
    //     } Samad, Saif, Aiman
    // // samad.salary = 8 (will make no sense if salary is private)



class binary
{
    string s;

private:
    void chk_bin(void);


public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
} 

void binary :: chk_bin(void){
    for (int i = 1; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
        }
    }
    
}

void binary :: ones_compliment(void)
{
    for (int i = 0; i <s.length(); i++)
    {
        if (s.at(i) =='0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{   
    chk_bin(); // this is an example of nesting of member functions
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{

 

    // Nesting of member functions (on line 71, inside display)
    binary b;
    b.read ();
    // b.chk_bin(); 
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}