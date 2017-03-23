//Program to show how initialization list is better than assignment/dfault ctor is when it is containment

 /* In this example, the difference is negligible, but imagine if you will that A's default constructor did more, such as allocating memory or opening files. You wouldn't want to do that unnecessarily. */

#include<iostream>
using namespace std;

class A
{
    public:
    
    int x;
    A()
    {
        cout<<" A's Deafult Ctor"<<endl;
        x=0;
    }
    A(int x1)
    { 
        cout<<"A's Parameterized ctor"<<endl;
        x=x1;
    }
};

class B
{
        public:
        /* B() 
        {
            cout<<"B's Deafult Ctor"<<endl;
            a.x = 3;
        } 
        output is 
        
        $ ./a.exe
        Deafult Ctor
        B's Deafult Ctor
        */
        B():a(3)
        {
            cout<<"B's Deafult Ctor"<<endl;
        }
        /*output is
        A's Parameterized ctor
        B's Deafult Ctor

        */
        A a;
};
int main()
{
    B b;
    return 0;
}