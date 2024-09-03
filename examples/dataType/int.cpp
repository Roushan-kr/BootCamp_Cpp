#include <iostream>
#include<cstdint>
using namespace std;

int main()
{

     // about integer and it's type    it's counterversion(without signed value default ones)
    // 1. short int / short (2 byte)            unsigned short int
    // 2. int (4 byte)                  unsigned int
    // 3. long int / long (4/8 byte)             unsigned long int
    // 4. long long int / long long (8 byte)        unsigned long long int

     printf("Size if int data type is: %ld\n",sizeof(int));
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(long int)<<endl; // in linux based system it retun 8 byte value but un win it return 4 byte value or say compiler dependent 
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(long long)<<endl;

    // normally above value is compiler dependent to fix it (space ambugity) we use 
    // <cstdint> to declear fixed mem size vlaue 
    cout<<"----- 8 bits = 1 bit\n";
    cout<<sizeof(int8_t)<<endl;
    cout<<sizeof(int16_t)<<endl;
    cout<<sizeof(int32_t)<<endl;
    cout<<sizeof(int64_t)<<endl;
    // unsigned int
    cout<<sizeof(uint8_t)<<endl;
    cout<<sizeof(uint16_t)<<endl;
    cout<<sizeof(uint32_t)<<endl;
    cout<<sizeof(uint64_t)<<endl;


    // uint32_t fun =-264;
    // cout<<fun<<endl;//  unsined mai only unsined else garbage

    int32_t fun =0x16; // 0x for hexcode formate
    int fun2=0b00010110; // 0b for binarry formate
    cout<<" value of fun is "<<fun<<endl;
    cout<<" value of fun2 is "<<fun2<<endl;
    
return 0;
}