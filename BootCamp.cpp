// using hitish chaudhari lecture (refrence c++20)
// If C++ compiler able to sucessfuly run it it argubely a C++ program
// The total count of reserved keywords is 95.


# include<iostream>
#include<string> 
#include<cstdio>  // cross programming frendly lib
using namespace std;  // To avoid name colision insteed of using scope resolution operator 

void nothing(){
    puts("I do nothing while in screen\n");
}

char meChar(){
    return ('R'+'o'); // I don't know about this 
}


int main(){
// because it is a bearborn lang which let it to use almost all the stuff by user mean it higly backward compitable

//  refer https://gcc.gnu.org/projects/cxx-status.html#:~:text=GCC%20has%20full%20support%20for%20the%20of%20the,features%20that%20are%20part%20of%20the%20C%2B%2B14%20standard. for more update cycle


/*
std::puts("Click in buttin");  // if namespace not defined 
puts("crate anew player"); //block element 
puts("Add life to player"); // a single line of code terminated by semicoloum caleed statement 
*/


/*
----------------- C++ version and features -----------------
C++ --> 1998( 1st version)
C++2 -->  value init
C++11 --> lambda, nullptr, Rvalue refrence 
C++14 --> generlized lambdas , variable template
C++17 --> flod expressions 
C++20 --> Ranges lib, Coroutines, modules
*/


// nothing();
// char rj=meChar();
// cout<<rj;

/*
while naming identifier just use this ideoligy
_at start mean private 
__ mean system keywords 
use a constient style of declearing identifier
*/

/*
cout <<" That\'s me \?  \b ";
cout <<"\n That\'s me ? \f(in old day's it use to feed a new paper by printer)";
cout<<"\nthis is me\t u \v r \r a";
cout<<"this is \a";
*/


/*
    Data Types in cpp
    type                        Keyword 
    Boolean                     bool
    character                   char
    integer                     int 
    float point                 float
    double floting point        double (default iff decimal involve)
    valueless                   void

    we use qualifier like const to add extra fetures 
*/

// string myColor;
// cout<<"Enter your fav. colour\n";
// // cin>>myColor; // only able to carry first word only 
// getline(cin, myColor); // method then identifier
// cout<<"Hey "<<myColor<<" is also ny fav too! \n";

/* i use this as feture 
string FName, LName;
cout<<"Enter your first and last name:"<<endl;
cin>>FName;
cin>>LName;
cout<<"Hey welcome "<<FName;
cout<<"\nHey welcome "<<LName;
*/

// Now about Pointer 
// int value=40;
// int *ptr =&value;
// cout<<"value of &ptr "<<&ptr<<endl;
// cout<<"value of ptr "<<ptr<<endl;
// cout<<"value of &value "<<&value<<endl;
// cout<<"value of *ptr "<<*ptr<<endl;
// cout<<"value of value "<<value<<endl;

// int MyVar=*ptr; // pointer derfrencing 
// cout<<"\n value of MyVar is "<<MyVar<<endl;





return 0;
}