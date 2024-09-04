#include "header.h"
for linling local header file
#include <header>
for linking std header file

```cpp
// for hrader.h
#ifndef adder_h
#define adder_h;
// header file body
// eg
int lifeup()
{
    static int life = 3; // it need to be same as main(life) b/c static int defined 0 at initial
    return ++life;
}

struct user // recomended use when method are not used
{
    const int id;
    mutable string name;
// private:
    int cource_count;
    const char *email; // here i make the pointer as const not it's value
};

void incr(auto &num)
{
    ++num;
    cout<<"I am int "<<num<<endl;
}
void incr(auto *ptr){
    ++*ptr;
    cout<<"I am int "<<*ptr<<endl;

}

#endif
```

now in main.cpp

```cpp
cout << life<<endl;
cout << (life = lifeup())<<endl; // if i call it again it retun some ambugity which sloved by using static with same value as above
cout<< -life; // making negative by adding '-' to it

 // somtimes for optimisation we need to use short hand for this i.e +=,-= /= ,*= it sometime resist it to hold temperrary addresh to perform some operation
//  use ! , and or  for logical opertor
     bool islogedin =-0;// any non zero value it retun true
     bool isadmin =1;
     bool isgoogleusr =true;

if (!(isadmin and islogedin)==1){cout<<"\n"; } // it not nessary in case of {} it is nessary

```

```cpp
// operation
  uint8_t x = 2;
    uint8_t y = 3;
    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;
    cout << (~y) << endl;  // why this retun negative sign
    cout << (-~x) << endl; // why this retun negative sign
    cout << (y << 1) << endl;
    cout << (y >> 1) << endl;
    unsigned int i = 12;
    cout << ~i<<endl; // it retun a garbage value why?
    int number = 10; // Binary representation: 0000 1010
    cout << ~number<<endl; // Output: -11 (binary representation after flipping the bits: 1111 0101)
 char ch = 'A'; // ASCII value: 65 (binary: 0100 0001)
    cout << ~ch<<endl;   // Output: -66 (binary representation after flipping the bits: 1011 1110)

```

### playing with heap

```cpp
//    myptr= new(nothrow) int [10];  // alocating it to heap and if it fail then it did not through any error not recomended to use nothrow

// using new keyword for geting heap memory refrenced wwith help of pointer
try{
    int* myptr= new int [10];  // alocating it to heap
// remember to delete this
 delete myptr;// this able to delate only one now i get confused
//     delete [] myptr; // recomended
//  it not only delete the pointer also its entire space

}catch(...){
    // while requesting memeory to heap use try catch for error handling
}

  // dynaic array
     int *arr = new int[5]{1,2,3,4,5}; //🤷‍♂️
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }

     delete [] arr;
```

### using struct

```cpp
  struct student
       {
        int uid;
        string name;
        int section;
        float marks;
        void setvl(int id, string name, int sec, float marks){
            uid=id;
            this->name=name;
            section =sec;
            this->marks=marks;
        }
        void desp(student &a){
            cout<<a.uid<<endl;
            cout<<a.name<<endl;
            cout<<a.section<<endl;
            cout<<a.marks<<endl;
        }
         void cpy(student &a){
           uid= a.uid;
           name= a.name;
          section = a.section;
           marks= a.marks;
        }
       }
       student rj,sahil;
       rj.setvl(1,"roushan",3,99.9);
       rj.desp1();
       shail.cpy(rj);
       sahil.desp();
    //    another method

    user rj ={01,"roushan",2, "roushan@lcr.com"};
    cout<<rj.id<<endl;
    cout<<rj.name<<endl;
    cout<<rj.email<<endl;
    cout<<rj.cource_count<<endl;

    user *micky =&rj;
    cout<<micky->email<<endl;
    micky->email="micky@tom.com";
    cout<<micky->email<<endl;


```
### enum
```cpp
    // enum :- alternative to preprocesser constants {#define BOLD 4}example    
        enum Msoffice:uint8_t {  // specifying size 
        BOlD=3, // counting start from 0
        Italic=1,
        Uppercase,
        lowecasse=2,
        fonts  // relative value is 3 now
    };

    cout<<MsOffice(BOlD);
    cout<<"\n"<<BOlD;
    cout<<'\n'<<Msoffice(fonts);
    auto a= Msoffice(Italic);
    cout<<a;

```
### auto 

```cpp
 auto feedback=api_call();
    cout<<feedback;
    if ( typeid(feedback)== typeid(string)){
        puts("\n we are same");
    }
    auto response =another_api_call();
    if (typeid(response)==typeid(bool))
    {
        puts("we meet again"); 
       }
        
```

```cpp
 User *dynamic_usr = new User ;
 User *dynamic_usr = new User() ; // both comment are same
 User *dynamic_usr = new User(rj) ; 
 cout<<dynamic_usr->age<<" "<<dynamic_usr->id<<endl;

 delete dynamic_usr
 cout<<::life; // global variable
```