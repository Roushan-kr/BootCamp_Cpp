// #ifndef adder_h
// #define adder_h;
#include <iostream>
#include <string>

void sayhallo() { puts("Hello their!!"); }
int ret2() { return 2; }
int lifeup()
{
    static int life = 3; // it need to be same as main(life) b/c static int defined 0 at initial
    return ++life;
}
struct user
{
    const int id;
    mutable string name;
    int cource_count;
    const char *email; // here i make the pointer as const not it's value
};

    string api_call(){return "Got some data";}
    bool another_api_call(){return false;}
enum MsOffice{};

struct User
{
    // const uint8_t id; // why it not work
    const int id;
    int age;
    User():id(01),age(18){}
};

void lifeup(int life){
    ++life;
}
int llife=3;
void incr(auto &num)
{
    ++num;
    cout<<"I am int "<<num<<endl;
}
void incr(auto *ptr){
    ++*ptr;
    cout<<"I am int "<<*ptr<<endl;

}


// #endif