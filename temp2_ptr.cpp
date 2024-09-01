# include<iostream>
# include <string>
using namespace std;

// char meChar(){
//     return ('R'+'o'+'u'); // I don't know about this  
//     // this retun a asci value addition dueto which it not in rage so it may print some ambigenous value 
// }

int main(){


// string a= meChar();

// cout<<a;
cout <<"\n That\'s me ? \f(in old day's it use to feed a new paper by printer)";
cout<<"\nthis is me\t u \v r \r a";

cout<<"hi";
int value=40;
int *ptr =&value;
cout<<"value of &ptr "<<&ptr<<endl;
cout<<"value of ptr "<<ptr<<endl; //same 
cout<<"value of &value "<<&value<<endl; //same
cout<<"value of *ptr "<<*ptr<<endl;
cout<<"value of value "<<value<<endl;

cout<<endl;
int score=40;
int &anotherRefrece=score;
cout<<"\n"<<score;
cout<<"\n"<<anotherRefrece;
cout<<"\n"<<&anotherRefrece;
cout<<"\n"<<&score;
anotherRefrece=80;
cout<<"\nafter updating score " <<score<<endl;


int  arr[2]={1,2},&sample= arr[0];
// arr[0]=45;
sample++;
sample++;
cout<<sample<<arr[0]<<endl;
return 0;
}