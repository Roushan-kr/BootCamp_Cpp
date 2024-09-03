// using hitish chaudhary lecture (refrence c++20)
// If C++ compiler able to sucessfuly run it it argubely a C++ program
// 95 keywords in cpp.

#include <iostream>
#include <string>
#include <cstdio>    // crossPlatform support for c/cpp
using namespace std; // To avoid name colision insted of using scope resolution operator

void nothing()
{
    puts("I do nothing while in screen\n");
}

// if the Assigned dataType is char then it return ┴ while if int then -63(typeCast it)
char meChar()
{
    return ('R' + 'o'); // internal convertion to asci for performaming operation
    // this return a sum of asci R-82 and o-111 ,193- ┴
}

int main()
{
    // because it is a bearborn, it support most backward capibility
    // not break easly even after major update

    //  refer https://gcc.gnu.org/projects/cxx-status.html#:~:text=GCC%20has%20full%20support%20for%20the%20of%20the,features%20that%20are%20part%20of%20the%20C%2B%2B14%20standard. for more update cycle

    /*
    std::puts("Click in button");  // if namespace not defined
    puts("crate a new player"); //block element
     //NOTE: a single line of code terminated by semicoloum called statement
     puts("Add life to player");
    */

    /*
    ----------------- C++ version and features -----------------
    C++ --> 1998( 1st version)
    C++3 -->  value init
    C++11 --> lambda, nullptr, Rvalue refrence(move(), && direct move rither then copy)
    C++14 --> generlized lambdas , variable template
    C++17 --> flod expressions
    C++20 --> Ranges lib, Coroutines(similar to Go community), modules
    //NOTE: most of major update comes after interval of 3Y, next 2023
    c++23 --> error handling improved similar to rust, more on refinment
    */

    /*
    Rvalue refrence
    std::string str2 = std::move(str1); // str2 is now "Hello", and str1 is in a valid but unspecified state.
     // inWhich
     // 1. lvalue has a memory address and can be assigned to
     // 2. rvalue is a temporary result of the addition operation if called by value.

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
    // \b for removeing prev char(index)
    cout <<" That\'s me \?  \b ";
    cout <<"\n That\'s me ? \f(in old day's it use to feed a new paper by printer)";
    // \r make it right char[] to leftmost one by replaing it upto char[].len (charage return)
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
    /*
    ------------------- Some Qualifiers ---------------------
         1. const: To declare a variable as constant, meaning its value cannot be changed after initialization.
         2. volatile: Informs the compiler that a variable may change at any time, preventing certain optimizations that assume the variable cannot change unexpectedly (useful in multithreading or when interacting with hardware).
         3. mutable: Allows a member of an object to be modified even if the object is declared as const.
         4. static:{
                        Within a class: Shared among all instances of the class.
                        Within a function: Retains its value between function calls.
                        At file scope: Limits visibility to the file (internal linkage).
        }
        5. extern: Declares a variable or function that is defined in another translation unit (file).
        6. register:  Suggests to the compiler that the variable should be stored in a CPU register for faster access. Modern compilers often ignore this qualifier, as they handle optimization more efficiently.
        7. constexpr: Declares that the value of a variable or the result of a function can be computed at compile time.
        8. inline fn: Suggests that the compiler replace the function call with the function code to avoid function call overhead.
        9. restrict: Indicates that a pointer is the only reference to that memory location, allowing the compiler to optimize more aggressively.
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
    // cout<<"value of ptr "<<ptr<<endl; //same (return &value)
    // cout<<"value of &value "<<&value<<endl; //same
    // cout<<"value of *ptr "<<*ptr<<endl;
    // cout<<"value of double pointer "<<*(*(&ptr))<<endl; //NOTE: same
    // cout<<"value of value "<<value<<endl; //same

    // int MyVar=*ptr; // NOTE: pointer derfrencing
    // cout<<"\n value of MyVar is "<<MyVar<<endl;

    /*
    // now About some refrence data type
    int score=40;
    int &anotherRefrece=score; //pointing to same mem addresh
    cout<<"\n"<<score;
    cout<<"\n"<<anotherRefrece;
    cout<<"\n"<<&anotherRefrece; //same
    cout<<"\n"<<&score; //same
    anotherRefrece=80;
    cout<<"\nafter updating score " <<score<<endl; //80

    int  arr[2]={1,2},&sample= arr[0];
    cout<<sample<<endl;
    sample++;
    cout<<sample<<endl; // to overcome from this use pointer
    */
    /*
    // array
    // int intArray[4]={1,2,3,NULL};  // c**a likin kam keya ab c**d bhe kam bhe nhu keya
    int intArray[4]={1,2,3,};
    cout<<intArray<<endl; // they are just the addresh then i may use similar pointer arthemitices also addresh are assinable
    cout<<*intArray<<endl; // like this
    cout<<*(intArray)+4<<endl; // like this
    // cout<<*(intArray+4)<<endl; // not like this
    // Addresh to pointer defrencing
    int *ptr =intArray; // refer 123
    for (int i = 0; i < 4; i++)
    {
        cout<<*ptr<<endl;
        ptr++; // credit compiler smartness

    }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"value of intArrayis: "<<intArray[i]<<endl;
    //     cout<<"value of &intArrayis: "<<&intArray[i]<<endl;
    // }

    // by locking this behiabher is like it first store it's base value then it just act as a pointer and derefrence like intArray[index-1+0]

    // upadating
    cout<<(intArray[1]=12)<<endl; // i just use presidence to assign and print at same line
    cout<<intArray[3]<<endl; // if i did not assgn it's value then it take null

    */

    /*
    // about integer and it's type    it's counterversion(without signed value default ones)
    // 1. short int (2 byte)            unsigned short int
    // 2. int (4 byte)                  unsigned int
    // 3. long int (4/8 byte)             unsigned long int
    // 4. long long int (8 byte)        unsigned long long int

    //  printf("Size if int data type is: %ld\n",sizeof(int));
    // cout<<sizeof(short int)<<endl;
    // cout<<sizeof(short)<<endl;
    // cout<<sizeof(long int)<<endl; // in linux based system it retun 8 byte value but un win it return 4 byte value
    // cout<<sizeof(long)<<endl;
    // cout<<sizeof(long long int)<<endl;
    // cout<<sizeof(long long)<<endl;

    // this somtimes return ambiguity to diffrent os related for size so we use some std lib hedder to fix size
    // which is <cstdint>

    // cout<<sizeof(int8_t)<<endl;
    // cout<<sizeof(int16_t)<<endl;
    // cout<<sizeof(int32_t)<<endl;
    // cout<<sizeof(int64_t)<<endl;
    // // unsigned int
    // cout<<sizeof(uint8_t)<<endl;
    // cout<<sizeof(uint16_t)<<endl;
    // cout<<sizeof(uint32_t)<<endl;
    // cout<<sizeof(uint64_t)<<endl;


    // uint32_t fun =-264;
    // cout<<fun<<endl;//  unsined mai only unsined else garbage

    int32_t fun =0x16; // 0x for hexcode formate
    int fun2=0b00010110; // 0b for binarry formate
    cout<<" value of fun is "<<fun<<endl;
    cout<<" value of fun2 is "<<fun2<<endl;
    */
    /*
    int rating =4;
    if (rating==5){
        puts("Thanks for rating us");

    } else if (rating>=2){
        puts("We try to inprove it thanks!!");
    }
    else{
        puts("Tell us the resion for it..");
    }
    // if (NULL)
    // if(0)
    if(false)
    {
        cout<<"\n I never been executed \n";
    }

    // Now ternary operator
    // condtion ? "True block ":"false block"
    // string feedback;
    */

    // ((rating>1)&&(rating<3))?cout<<"Help Us to inprove "<<endl<<"Your feedback:- "/* getline(cin, feedback)*/:cout<<"Thanks for ratting "<<endl;

    /*
    int rating =3;
    switch (rating)
    {
    case 1:
        cout<<"Give Us feedback for it "<<endl;
        break;
    case 2:
        cout<<"Any suggestion "<<endl;
        break;
    case 3:
        cout<<"Let us improve more "<<endl;
        // break;
    case 4:
        cout<<"Thank for ratting "<<endl;
        break;
    case 5:
        cout<<"We love it!!"<<endl;
        break;

    default:
        cout<<"Better luck next time "<<endl;
        break;
    }// if i did not put break then it try to execute all upcomming blocks
    // as in case 3 similar to it this is called as fallthrough in lang like golang it is not their
    */
    /*
    // Now loop also known for ittrection
    // first check condition and test and what it want if itreation then which loop best for it and which value should be ittreated over
    // new ranged based loop change value and generated tested value automatic

    // int arr2[]; X // int arr2[size]
    int arr[]={10,11,12,13,14,15,16,17}; // do like this if size not given  // somtimes not recommeded and also it is mordern syntex
    // cout<<sizeof(arr);
    // int i=0;
    // while (i<(sizeof(arr)/sizeof(int)))
    // {
    //     if(i==3){
    //         cout<<"I am testing here\n";
    //         ++i; // to be not continue this by again and again
    //         continue; // now skip this itteration
    //     }
    //     if(i==4){
    //         cout<<"failed to run \n";
    //         break; // now break nornal flow
    //     }
    //     cout<<"The value at "<<i+1<<" is: "<<arr[i]<<endl;
    //     i++; // i also use ++i in place of this which some times better then i++
    // }
    // puts("outside the loop");


    // do-while may seen common in driver , electroinic(hardwere) related progam
    // do{
    //     if(i==0){
    //         i++;
    //         continue;
    //     }
    //     cout<<"Current no is: "<<arr[i]<<endl;
    //     ++i;
    // }while(i<(sizeof(arr)/sizeof(int)));  // it always run fist condition

    // for (int i = 0; i < (sizeof(arr)/sizeof(int)) /*now after this it jump to body then i++*/
    //; i++)
    // {
    //     cout<<"Current value is: "<<arr[i]<<endl;
    //     // i not adjuctly delated after compiltion
    // }

    // Now with some inhencement over for loop
    // for range-based loop / for each loop
    // int *ptr;
    // for (int i:arr)
    // {
    //     cout<<i<<endl;
    //     // cout<<&i<<endl;
    //     // cout<<arr[i]<<endl;
    //      ptr =&i;  // update nahi hokai bhi pointer ko update kar diya how by jumping🤷‍♂️
    //     cout<<*ptr<<"\n\n";
    // }
    // for ( ptr; *ptr < 19; ptr++)
    // {
    //     cout<<" value is: "<<*ptr<<endl;
    //     cout<<" &value is: "<<ptr<<endl;
    // }

    /*
    char myString[]={"roushan"}; // compiler put zero at last
    char myName[] ={'r','o','u','s','h','a','n',0}; // {'r','o','u','s','h','a','n'} is look like this
    puts(myString);
    cout<<myName<<"\n";
    // iterating through condition
    printf("1st break\n");
    for (int i = 0; myString[i]!=0; i++)
    {
        cout<<myString[i];
    }
    printf("\n2nd break\n");
    for (int i = 0; myName[i]!=0; i++)
    {
        cout<<myName[i];
    }
    // iterration through true false condition
    printf("\n3rd break\n");
    for (int i = 0; myName[i]; i++)
    {
        cout<<myName[i]; //true false condition
    }
    printf("\n4th break\n");
    for (int i = 0; myString[i]; i++)
    {
        cout<<myString[i]; //true false condition
    }
    printf("\n5th break\n");
    // iteration through pointer
    for (char*cp= myName;*cp!=0; cp++)
    {
        cout<<*cp;  //time to derefrencing
    }
    printf("\n6th break\n");
    for(char c:myName){
        // to skip
        if (c==0) break;//continue;
        cout<<c<<endl; // see their one more line which termenation value 0 get not typcasted so new line formed
    }

    */

    // Always Use float with caution
    // printf("The size of float is: %ld, and size of double is %ld and size if long float is: %ld \n ", sizeof(float),sizeof(double),sizeof(long double)); /*why %f not works */
    //  float value=20.2 +20.2;
    //  cout<<value<<endl;
    //  if (value==40.4){
    //     puts("I am same "); //it seem to be same if not compitily viewd
    //  }
    //  else{
    //     puts("I am not");
    //  }

    // printf("\nvalue is : '%.25f", value); // 40.4000015258789060000000000
    //   double value=20.2 +20.2;
    //   cout<<value<<endl;
    //   if (value==40.4){
    //      puts("I am same "); //it return almost equal approx less value but same
    //   }
    //   else{
    //      puts("I am not");
    //   }

    // printf("\nvalue is : '%.25lf", value); // 40.3999999999999990000000000
    //  long double value=20.2 +20.2;
    //  cout<<value<<endl;
    //  if (value==40.4){
    //     puts("I am same "); //it return same
    //  }
    //  else{
    //     puts("I am not");
    //  }

    // printf("\nvalue is : '%.25Lf", value);

    // auto call_api = 1;  // automatic assign what data is comming and their datatype if not fixed
    // float call_api = 1.0;
    // int call_api = 1;
    // try{
    //     cout<<"Trying to use API value\n";
    //     cout<<"did some tesing on it \n";
    //     // Now i am not able to handel it
    //     if(call_api==1){
    //         puts("\nExecuting admin codes");
    //         puts("Welcome admin ");
    //     }
    //     else{
    //     throw call_api;  // if i didn't put else here i sand it respounce to catch block eachTime
    //     cout<<"Now nothing going to be executted after throw\n";
    //     }

    // }catch(int a){

    //     cout<<"Acess denied!! with error code "<<a<<endl;
    // }catch(...){ // it handel all othrt execption
    // cout<<"logined failed \n worng cendential\n";
    // }
    // cout<<"\nI am out\n";
    return 0;
}