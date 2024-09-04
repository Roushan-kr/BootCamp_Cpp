# include<iostream>
#include <string>
// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three  refer this 
using namespace std;
// #foo (like #define), this use in which first got stored in memory with first property get readed and executed 
//  also after naming it all other is treated as rest of code snipeat

// directive for defining macros
// A macro is essentially a code snippet that gets replaced by its definition at compile time.
// This is done by the preprocessor before the actual compilation of the code begins.

#define ENDMSG cout<<"\nGood night buddy\n"  // general sentex
// #define int int64_t
#define print(a) cout<<a<<endl

template<typename T>
void printF(T t){
    cout<<t<<endl;
}

// variadic ...
template <typename T, typename... Args>
void printF(T t, Args... args){
    cout<<t<<endl;
    printF(args...);
}


template <typename T>
T addme(T a, T b){
    return a+b;
}

void showme(){
    puts("what i do for you?");
}

template <typename T>
using fun_ptr = T (*)(T, T);

void print_val(int *a){
    printf("value should be %d\n", a);
}


int factorial(long long  n){
    if (n<=1){
        return 1;
    }
   return n*factorial(n-1);
}


class User{
  mutable  int8_t _secret=01;
//   for disabling const and some func
    // User(){}
    // ~User(){}
//Here, int8_t _secret is declared as a mutable member. This means that _secret can be changed even when the User object is declared as const.

public:
    string name ="default";
    // class methods

    void classmsg(){cout<<"class is great "<<name<<endl;}
    // int getsec() const {return _secret;} //A const class obj try to run const function or data member
    // A const member function guarantees that it will not modify any member variables of the class (unless they are marked mutable).
    // The const member function can be called on const objects of the class, meaning you can use this function even when the object is declared as const.
    int getsec() const ;//A const class obj try to run const function or data member

    void setSec( const int& a){_secret=a;}  // by using const i am able to directly assign value to it
    // The const int& means that the function setSec takes an immutable reference to an integer. You cannot modify the value of a inside the function.

    void sayname();

};
void User::sayname(){cout<<name;}
int User::getsec()const{
    return _secret;
}

class Phone{
    string  _name ="X";
    string _os ="";
    float _price=0 ;
public:
    Phone();
    Phone(const string &name ,const string &os, const float &price);
    Phone(const Phone &); //copy constructor
    string getname(){return _os;}
    Phone &operator=(const Phone &); // assignment opertor overloading 
    // ~Phone(){puts("Now let me Distory");}
    ~Phone(); //LIFO

};
 Phone::Phone():_os("Andy"){puts("defaul cnst called ");} 
//  Phone::Phone(): _os(),_name(),_price()      
//  {puts("defaul cnst called ");}  // both work same 
Phone::Phone(const string &name ,const string &os, const float &price):_os(os),_name(name),_price(price){puts("look like perimeter cnst");}

Phone::Phone(const Phone &that){
    puts("\ncopy cnst called");
    _os="skinned-"+that._os;
    _name=that._name;
    _price=that._price;

}

Phone &Phone::operator=(Phone const &that){  // i think it may not so good
    // if (this!=&that){
        // puts("Are you board!!\n");
        // this->_os="Alpha"+that._os;
        _os="Alpha"+that._os;
        // this->_name=that._name;
        _name=that._name;
        // this->_price=that._price;
        _price=that._price;

    // }

    // Phone x;
    //     x._os="rj-"+that._os;
    //     x._name=that._name;
    //     x._price=that._price;
    // return x;

}

Phone::~Phone(){
    puts("Let me Go now!!");
    // for displaying name for c specific thing
    printf(" for %s\n \t %p\n",_name.c_str(), this);  // this is a self refrencing pointer
}



int main(){


/*
    int a=12,b=13;
    float c=14.5,d=15.515;
    cout<<addme(a,b)<<endl;
    cout<<addme(c,d)<<endl;
    cout<<addme(bool(c),(bool)d);  // i can't use this if i had use call by refence
    char aa='a',bb ='b';
    string aaa="asdf", bbb="jkl;";
    cout<<addme(aa, bb);
    cout<<addme(aaa, bbb);

*/
/*
//  quite important 

// pointer to function template
   //ref:  using fun_ptr = T (*)(T, T);
    // fun_ptr<float> ptr =&addme <>;  // both work
    fun_ptr<float> (ptr) =&addme ;
    cout<<ptr(15.64,-56.5544 );

// pointer to function
    // auto (*bb)() =showme;    // both work
    void (*bb)() =showme;   // i dont  put () with showme b/c i dont have to run here it 
    bb();
    // cout<<*bb; // what it retun may not satishfied me may be it don't have a retun type
    (*bb)();   // it also able to display

*/  
    // be caucious while using null

    // print_val(NULL);  //i cant use this, for using this # define NULL 0 (mean redefined micro)
    // alternative
    // print_val(nullptr);// real null mean start of the value

    // cout<<factorial(25);
    // print(13);
    // print("roushan"); // using micro defination

    // printF(1,15.5,15,4,"dkh",'s'); // using variadics 


//  OOP
    User rj,sahil;
    rj.name="roushan";  
    rj.classmsg();
    rj.setSec(13);
    cout<<rj.getsec();
    rj.sayname();
    sahil.classmsg();
    const User ak;
    cout<<ak.getsec();  // non const obj can acess const methods but conat object only acess const methods
    User mkghadi =sahil;  // here a implecite constructor called 
    mkghadi.classmsg();
    mkghadi.sayname();
    cout<<"\n";

// while declearing a obj inst default const. called
    Phone sumsung;
    cout<<sumsung.getname()<<endl;
    Phone lenovo("lenovo k10 v1.x","Andro pi",12500);
    cout<<lenovo.getname();
    Phone motoG10=lenovo;
    cout<<motoG10.getname();
    Phone Nokie(sumsung);
    Nokie.getname();
    // Phone rj1=(Nokie);
    cout <<"test val"<<endl;
    Phone rj1=Nokie=motoG10; // first time blai(nokie) mai orignal run hoga then overloaded
    cout<< rj1.getname();
   



    ENDMSG; // i use ; here not to break code rethum 

    cout<< endl;
return 0;
}