### spent enough of your time for base class

```cpp
class Men
{
    string _name;
    int _age;
    Men() {}
    // void cngAge(int age){_age=age;}
    friend void changeAge(Men &men, int age);
    // making a id type value common for all sub derived value
    static int mensId;  // help mainting a simlear state over all instance or inherated instance
protected:
    Men(const string name, const int age) : _name(name), _age(age) {}
    void run() { puts("I am able to run"); }

public:
    void sayName();
    void Id(){cout<<"My id is "<<mensId<<endl;}
   virtual void intro(){puts("I am a common Men");}
//   void intro(){puts("I am a common Men");}  // if simply defined mean a base class pointer point this insteed of that derived class method if pointer is decleard for base class
    Men(string name):_name(name),_age(0){}  // make this for test case
    //now it become Abstract Class
    virtual void WorkUnder()=0;  // pure virtual func need to define in all derived class
};

// Base class age changing Prop with obj ref via friend function
// this someTimes laid to security issue use protector access spiciefer or gatter/satter
void changeAge(Men &men, int age)
{
    men._age = age;
    // return men;
};
// initilizing static value
int Men::mensId =0;


```

### now for inheratance

```cpp
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
```

```cpp
 Men *BsePtr[2]; // array of class instance
 BsePtr[1]=&krish;
 BsePtr[1]->Id();
```

<!-- refer https://chatgpt.com/share/30c11a0a-2d03-4892-881a-252bdf4d1af8 for more info -->

```cpp
class Class1 {
public:
    virtual void pureVirtualFunction() = delete; // Deleted function
};

class DerivedClass : public Class1 {
public:
    void pureVirtualFunction() override { // Attempt to override
        // Error: Overriding a deleted function is not allowed
    }
};

int main() {
    DerivedClass obj;
    // obj.pureVirtualFunction();  // Error: Call to deleted function
    return 0;
}

```
### creating instance via factory function
```cpp
class PrivateConstructor {
private:
    // Private default constructor
    PrivateConstructor() {
        cout << "Private Constructor Called" << endl;
    }

public:
    // Static factory method to create an instance
    static PrivateConstructor createInstance() {
        return PrivateConstructor();  // Accesses the private constructor
    }
};

int main() {
    // Create an instance using the static factory method
    PrivateConstructor obj = PrivateConstructor::createInstance();
    return 0;
}


```

### ensuring only one instance of that class is created 

```cpp
class Singleton {
private:
    static Singleton* instance;  // Static pointer to the single instance

    // Private constructor
    Singleton() {
        cout << "Singleton instance created." << endl;
    }

public:
    // Public static method to provide access to the single instance
    static Singleton* getInstance() {
        if (!instance) {  // If instance is not created, create it
            instance = new Singleton();
        }
        return instance;
    }
};

// Initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    // Create and access the singleton instance
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    // s1 and s2 point to the same instance
    cout << (s1 == s2) << endl;  // Output: 1 (true)
    return 0;
}


```