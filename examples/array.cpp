#include <iostream>
using namespace std;

int main()
{

     int intArray[4]={1,2,3,}; // hold four data Entry
     cout<<sizeof(intArray)/sizeof(int);
    
    for (auto i : intArray){
        cout<<i;
    } // 1230

    cout<<intArray; // => &intArray , so use pointer arthematics
    // credit compiler smartness
    cout<<"\n";
    cout<<*intArray; // => intArray[0]
    cout<<"\n";
    cout<<*(intArray)+4; // => intArray[0] +4
    cout<<"\n";
    cout<<*(intArray+1); // => intArray[1] 
    cout<<"\n";

     // by locking this behiabher is like it first store it's base value then it just act as a pointer and derefrence like intArray[index-1+0]

    cout<<"\n"<<(intArray[1]=12)<<endl; // i just use presidence to assign then print at same line
    cout<<intArray[1]<<endl; // new value assigined 
    cout<<intArray[4]<<endl; // ambugity
    cout<<intArray[3]<<endl; // 0

return 0;
}