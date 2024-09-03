# Integer Types and Fixed-Width Integers in C++ & others

## Integer Types

In C++, integer types can be categorized by their size and whether they are signed or unsigned. The common types are:

1. **short int** / **short** (2 bytes)  
   **unsigned short int**

2. **int** (4 bytes)  
   **unsigned int**

3. **long int** / **long** (4/8 bytes)  
   **unsigned long int**

4. **long long int** / **long long** (8 bytes)  
   **unsigned long long int**

Note: The size of these types can be compiler-dependent.

## Fixed-Width Integer Types

To ensure a fixed memory size for integer types, use the types defined in `<cstdint>`:

```cpp
#include <cstdint>

cout << "----- Fixed-width integers -----\n";
cout << sizeof(int8_t) << " bytes" << endl;   // 8 bits
cout << sizeof(int16_t) << " bytes" << endl;  // 16 bits
cout << sizeof(int32_t) << " bytes" << endl;  // 32 bits
cout << sizeof(int64_t) << " bytes" << endl;  // 64 bits

cout << sizeof(uint8_t) << " bytes" << endl;  // Unsigned 8 bits
cout << sizeof(uint16_t) << " bytes" << endl; // Unsigned 16 bits
cout << sizeof(uint32_t) << " bytes" << endl; // Unsigned 32 bits
cout << sizeof(uint64_t) << " bytes" << endl; // Unsigned 64 bits
```

## Example Usage

```cpp
int32_t fun = 0x16;  // Hexadecimal format
int fun2 = 0b00010110; // Binary format

cout << "Value of fun is " << fun << endl;  // Output: 22
cout << "Value of fun2 is " << fun2 << endl; // Output: 22
```

## string/char Eg

```cpp
 char myString[]={"roushan"}; // compiler put zero at last
 char myName[] ={'r','o','u','s','h','a','n',0}; // {'r','o','u','s','h','a','n'} is look like this

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

```

## Always Use float with caution

```cpp
     printf("The size of float is: %ld, and size of double is %ld and size if long float is: %ld \n ", sizeof(float),sizeof(double),sizeof(long double)); /*why %f not works */

     float value=20.2 +20.2;
    cout<<value<<endl;
     if (value==40.4){
        puts("I am same "); //it seem to be same, if not compitily viewd
     }
     else{
        puts("I am not");
     }

    printf("\nvalue is : '%.25f", value); // 40.4000015258789060000000000


```

### Double

```cpp

      double value=20.2 +20.2;
      cout<<value<<endl;
      if (value==40.4){
         puts("I am same "); //it return almost equal approx less value but same
      }
      else{
         puts("I am not");
      }

    printf("\nvalue is : '%.25lf", value); // 40.3999999999999990000000000
     long double value=20.2 +20.2;
     cout<<value<<endl;
     if (value==40.4){
        puts("I am same "); //it return same
     }
     else{
        puts("I am not");
     }

```

### Extra

```cpp
 auto call_api = 1;  // automatic assign what data is comming and their datatype if not fixed
cout <<typeId(call_api).name() // return int
```

### Handling DataSet

```cpp
 int call_api = 1;
    try{
        cout<<"Trying to use API value\n";
        cout<<"did some tesing on it \n";
        // Now i am not able to handel it
        if(call_api==1){
            puts("\nExecuting admin codes");
            puts("Welcome admin ");
        }
        else{
        throw call_api;  // if i didn't put else here i sand it resp. to catch block eachTime
        cout<<"Now nothing going to be executted after throw\n";
        }

    }catch(int a){

        cout<<"Acess denied!! with error code "<<a<<endl;
    }catch(...){ // it handel all other execption
    cout<<"logined failed \n worng cendential\n";
    }
    cout<<"\nI am out\n";
```

## Summary

- **Integer Types**: Sizes vary by compiler; use `<cstdint>` for fixed sizes.
- **Fixed-Width Integers**: Use types like `int8_t`, `int16_t`, `int32_t`, and `int64_t` for precise control over size.
- **Hexadecimal and Binary**: Integer literals can be represented in hexadecimal (prefix `0x`) and binary (prefix `0b`).

This guide covers the basics of integer types and their fixed-width alternatives, helping ensure consistent behavior across different platforms and compilers.
