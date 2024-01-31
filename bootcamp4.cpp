# include<iostream>
#include<string>
#include<memory>
using namespace std;

// Smarts Pointers(Wrapper around real raw pointer)
// microsoft https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170
// unique pointer free as scope end and anot perform copy cnst work


class User{
public:
    User(){cout<<"User created "<<endl;}
    ~User(){puts("User distoryed");}
    void testFunction(){puts("I am a test function");}
};

template <typename T>
void swaps( T &a, T&b){
    T temp=move(b);
    b=move(a);
    a= move(temp);
    cout<<"a is "<<a<<" and b is "<<b<<endl;
}
string PrintMe(){
    return ("Now yot Directly refrence me\n");
}
int main(){

    {
        // this is a empty scope 
        // Not to do
        // unique_ptr <User> rjj = new User();  // incorect sentex
        // unique_ptr <User> rjj(new User()) ;  // non fev way to declear b/c of new 

        // todo 
        unique_ptr<User> rj = make_unique<User>();
        rj->testFunction();
        // unique_ptr <User> rjj=rj; // not alowed

        
    }
    puts("outside the scope");
    {
        shared_ptr <User> sam = make_shared<User>();  // making 1st instace of pointer
        sam->testFunction();
        cout<<&sam<<endl;
        shared_ptr <User> samm =sam;
        sam->testFunction();
        cout<<&samm<<endl;
        weak_ptr <User> tim = sam;  // may no one track this 
    }
    // while using pointer somting  use as a refrece counter, count =0 mean  free

    // Move sementics
    int a=12, b=15;
    swaps(a,b);
    string && dref = PrintMe();
    cout<<dref<<endl;

    cout<< endl;
return 0;
}