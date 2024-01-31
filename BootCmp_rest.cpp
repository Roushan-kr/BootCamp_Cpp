#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
#include "header.h"
// todo:dynamic memory allocaton of array
// todo: getting idea about char ptr

// auto sayhallo(){puts("Hello their!!\n");}

int main()
{
    sayhallo();
    // cout << ret2() + 5<<endl;
    // int life=3 ;
    // cout << life<<endl;
    // cout << (life = lifeup())<<endl; // if i call it again it retun some ambugity which sloved by using static with same value as above
    // cout<<-life; // making negative by adding '-' to it
    // somtimes for optimisation we need to use short hand for this i.e +=,-= /= ,*= it sometime resist it to hold temperrary addresh to perform some operation

    // using logicla operator
    /*
     bool islogedin =-0;// any non zero value it retun true
     bool isadmin =1;
     bool isgoogleusr =true;

     // if ({!}(isadmin and islogedin)==1){  // it not nessary in case of {} it is nessary
     if (isadmin and (islogedin or isgoogleusr)){
         puts("welcome admin \n");
     }else if(islogedin||isgoogleusr) {puts("welcome user\n");}
     else{puts("try login again!");}
     */

    /*


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
    cout << ~i<<endl; // it retun a garbage value

    bool flag = true;
    cout << !flag<<endl; // Output: 0 (logical negation of true is false)

    int number1 = 10;
    cout << !number1<<endl; // Output: 0 (logical negation of non-zero value is false)

    int number = 10; // Binary representation: 0000 1010
    cout << ~number<<endl; // Output: -11 (binary representation after flipping the bits: 1111 0101)

    char ch = 'A'; // ASCII value: 65 (binary: 0100 0001)
    cout << ~ch<<endl;   // Output: -66 (binary representation after flipping the bits: 1011 1110)

    */

    /*  it need some detaling
     int *myptr;
     // //    myptr= new(nothrow) int [10];  // alocating it to heap and if it fail then it did not through any error
     //    myptr= new int [10];  // alocating it to heap
     //     *myptr =1;
     //     *++myptr=2;
     //    cout<<myptr<<endl;
     //    cout<<*myptr<<endl;
     // //    delete myptr;// this able to delate only one  now i get confused
     //     delete [] myptr;
     // //    --myptr;
     //    cout<<myptr<<endl;
     //    cout<<*myptr<<endl;
     cout << myptr << endl;
     try
     {
         // myptr = new(nothrow) int[500];
         if (myptr = new int[500])
         {
             cout << "\nspace allocated\n";

         else{
             throw myptr;
         }
     }
     catch (...)
     {
         puts("mamory allocation failed \n");
     }
     *myptr = 1;
     cout << *myptr << endl;
     delete[] myptr; // it not only delete the pointer also its entire space
     cout << myptr << endl;
     cout << *myptr << endl;

     */
    /*
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
        void desp1(){
            cout<<uid<<endl;
            cout<<name<<endl;
            cout<<section<<endl;
            cout<<marks<<endl;
        }
       };

       student rj,sahil;
       rj.setvl(1,"roushan",3,99.9);
       rj.desp1();
        sahil.cpy(rj);
        cout<<"\n";
        sahil.desp1();
        return 0;
    */
    /*

    user rj ={01,"roushan",2, "roushan@lcr.com"};
    cout<<rj.id<<endl;
    cout<<rj.name<<endl;
    cout<<rj.email<<endl;
    cout<<rj.cource_count<<endl;

 //    rj.id=12;  // here my int id is const
     rj.email="rj@lcr.com";  // here i am able to do this b/c only pointer is const not stored value
     cout<<rj.email<<endl;

     user *micky =&rj;
      cout<<micky->email<<endl;
      micky->email="micky@tom.com";
      cout<<micky->email<<endl;
      cout<<rj.email<<endl;

      */

    // dynaic array
    // int *arr = new int[5]{1,2,3,4,5}; //🤷‍♂️
    // for (int i = 0; i <5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //  delete [] arr;

    // int *mp= new (nothrow) int[156122];
    // cout<<*mp<<endl;
    //   cout<<  sizeof(mp)<<endl;
/*
    // enum :- alternative to preprocesser constants {#define BOLD 4}example    

    // enum Msoffice :char16_t{
    // enum Msoffice :uint8_t{  // now i specife it size
    enum Msoffice {  // default
        BOlD=3, // counting start from 0
        Italic=1,
        Uppercase, lowecasse=2,
        fonts  // relative value is 3 now
    };

    cout<<MsOffice(BOlD);
    cout<<"\n"<<BOlD;
    cout<<'\n'<<Msoffice(fonts);
    auto a= Msoffice(Italic);
    cout<<a;

*/
/*
    // use of auto in strongly typed lang

    auto feedback=api_call();
    cout<<feedback;
    if ( typeid(feedback)== typeid(string)){
        puts("\n we are same");
    }
    auto response =another_api_call();
    if (typeid(response)==typeid(bool))
    {
        puts("we meet again");    }
        
*/
// i stack we have allocate fixed mem size it can't resize on runtime
// heap is continous growing mem for dynamic task
// i also use namespace inside main function

/*
    // User rj={11,17}; // no need to specified default constt
    User rj;
    cout<<rj.age<<" "<<rj.id<<endl;

    int score=15;
    int * heap_score = new int ;
    // *heap_score = score;// dynamic pointing to stack
    *heap_score =2000;  // store dynamic value to heap
    cout<<*heap_score<<endl;

    // User *dynamic_usr = new User ;
    // User *dynamic_usr = new User() ; // both comment are same
    User *dynamic_usr = new User(rj) ; 
    cout<<dynamic_usr->age<<" "<<dynamic_usr->id<<endl;

    delete dynamic_usr;
    delete heap_score;
*/
    int life=3;
        lifeup(life);
    cout<<life;

int llife= 5;
    cout<<::llife;

    incr(::llife);
    incr(&llife);  // function overloading

    



    return 0;
}
