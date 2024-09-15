# include<iostream>
# include <vector>
using namespace std;

struct corner
{
    int a,b,c,d;

};

// overRiding straming operator
// returnType oper opValue ( whereValue, fromWhereValue)
ostream& operator<< (ostream& stram, corner & cor){
    return stram <<cor.a<<" "<<cor.b<<" "<<cor.c<<" "<<cor.d<<" "<<endl;
};

int main(){

    vector<int> inty;
    inty.push_back(2);
    inty.push_back(22);
    inty.push_back(24);
    inty.push_back(27);

    for (auto i = inty.begin(); i != inty.end(); ++i)
    {
       cout<<*i;
    }
    
    vector<corner> cor;

    cor.push_back({1,2,3,4});
    cor.push_back({1,2,3,4});
    cor.push_back({1,2,3,4});
    cor.push_back({1,2,3,4});
    cor.push_back({1,2,3,4});

    // for (auto i = cor.begin(); i !=cor.end(); ++i)
    // {
    //     // cin>>i->a;
        
    // }
    
    for (int i = 0; i < cor.size(); i++)
    {
        // cout<<cor[i]; not allow to stram this kind of value
        cout<<cor[i];

    }
    

    // lambda function
    // []{}(); // defining and running at that instance
    // without return
    []{cout<<"hello i lamda!!";}();
    // with return
    cout<< [](){return "\n0";};

    // generalizing lambda 
    auto sum =[](auto a , auto b){ return a+b;};
    cout<<sum(45,78);
    cout<<sum('4','7');
    string a="abc";
    string b="dce";
    cout<< sum(a,b); // for string have to do this not sum("abc","def")
    // overall lambda save a memmory too
    
return 0;
}