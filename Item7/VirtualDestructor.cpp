//Program for virtual destructor

#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"Base ctor"<<endl;
        }
        virtual ~Base()//made virtual
        {
            cout<<"Base dtor"<<endl;
        }
        virtual void function()
        {
            cout<<"Base virtual function called"<<endl;
        }
};

class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"Derived ctor"<<endl;
        }
        ~Derived()
        {
            cout<<"Derived dtor"<<endl;
        }
        void function()
        {
            cout<<"Derived virtual function called"<<endl;
        }
};           
int main()
{
    Base *d = new Derived();
    delete d;
    /* When base dtor was not made virtual
    
    Base ctor
    Derived ctor
    Base dtor
    
    */
    /* When base dtor was made virtual
    
    Base ctor
    Derived ctor
    Derived dtor -> made sure that derived dtor also gets called
    Base dtor
    
    */

    return 0;
}