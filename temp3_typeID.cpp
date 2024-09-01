#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    string s = "backd";
    char sss ='a';
    string ss = move(s);
    cout << ss << " s: " << s << endl;
    puts(typeid(ss).name()) ;
    return 0;
}