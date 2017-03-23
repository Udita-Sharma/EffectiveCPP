//write a pure virtual destructor to make class abstract


#include<iostream>
using namespace std;

class Base
{
    public:
        
       virtual ~Base() = 0;
        
};

Base::~Base()//Gave base dtor defination to avoid comiler error.
{
    cout<<"Base dtor"<<endl;
}

class Derived:public Base
{
    public:
        ~Derived()
        {
            cout<<"Derived dtor"<<endl;
        }
};

int main()
{
    Base *d = new Derived();
    delete d;//since Base dtor is now used by derived class it is throwing error -> undefined reference to `Base::~Base()'
    //to resolve this give Base dtor defination
    return 0;
} 