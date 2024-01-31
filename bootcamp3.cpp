#include <iostream>
#include <string>
using namespace std;
// I cpp Communities it were said that spent enough of your time for base class
// Polimorphism (Things are of same type with multi instance)

class Rectangle
{
    double _length;
    double _breath;

public:
    Rectangle(double l = 0.0, double b = 0.0)
    {
        _length = l;
        _breath = b;
    }
    double Area() { return _length * _breath; }
    // bool Bigger(Rectangle &rec){return(this->Area()>rec.Area()?true:false);}
    bool Bigger(Rectangle &rec) { return (Area() > rec.Area()); }
};

class Salary{
int _salary;
public:
   void setSalary(int salary){_salary=salary;}
   void getsalary(){cout<<"Amount that i have $"<<_salary<<endl;}
};

class Men
{
    string _name;
    int _age;
    Men() {}
    // void cngAge(int age){_age=age;}
    friend void changeAge(Men &men, int age);
    // making a id type value common for all sub derived value 
    static int mensId;
protected:
    Men(const string name, const int age) : _name(name), _age(age) {}
    void run() { puts("I am able to run"); }

public:
    void sayName();
    void Id(){cout<<"My id is "<<mensId<<endl;}
   virtual void intro(){puts("I am a common Men");}
//   void intro(){puts("I am a common Men");}  // cause for holding Men intro b/c of non-virtual func
    Men(string name):_name(name),_age(0){}  // make this for test case
    virtual void WorkUnder()=0;  // pure virtual func need to define in all derived class
};

void Men::sayName() { cout << "My name is " << _name << " and my age is " << _age << ",\n"; }


// Now inherated class

class Supermen : public Men
{
    bool _flight;

public:
    Supermen(string name) : Men(name, 32), _flight(1) {}
    void run() { puts("I am able to run with superSonic speed and fly"); }
    void intro(){puts("I am a common SuperMen");}
    void WorkUnder(){puts("I work under DC");}

};
class Spiderman : public Men , private Salary  // multiple inheratence
{
    bool _webbing;

public:
    Spiderman(string name) : Men(name, 19), _webbing(0) {}
    void run() { puts("I am able to run with Sonic speed only"); }
    void money(int amount){this->setSalary(amount); this->getsalary();}
    void intro(){puts("I am a common SpiderMen");}
    void WorkUnder(){puts("I work under Marvel");}

};
// Base class age changing Prop with obj ref
void changeAge(Men &men, int age)
{
    men._age = age;
    // return men;
};
// static variable for Men class
int Men::mensId =0;
int main()
{

    //     Rectangle r1(3.0,3.0),r2(4.0,4.0);
    //    cout<< r2.Bigger(r1);

    Supermen krish("krish");
    // changeAge(krish, 12);  // it may treat to security issue it recommendrd to ise getter or setters for this or use protected: for it
    krish.sayName();
    krish.run();
    // krish.Id();

    Spiderman petter("peater prker");
    petter.sayName();
    petter.run();
    petter.money(5000);
    // petter.Id();

    // Men a("this", 12);  // this is not able to make of private default cnst

    cout<<"\n Test time \n";
    // Men rj("roushan");  // reason for comment prue virtual function
    // all this is a example of polimorphism
    krish.intro();
    petter.intro();
    // rj.intro(); 
    // playing with base class pointer
    Men *BsePtr[2];
    BsePtr[1]=&krish;
    BsePtr[1]->Id();
    BsePtr[1]->intro(); // due to non virual function
    BsePtr[1]->WorkUnder();
    BsePtr[0]=&petter;
    BsePtr[0]->intro();  // hold Men intro b/c 
// test 3
    BsePtr[0]->WorkUnder();
    // BsePtr->WorkUnder();
    cout << endl;
    return 0;
}