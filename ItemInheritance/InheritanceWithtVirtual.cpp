#include<iostream>
using namespace std;
//even if we use polymorphism then also if function is overloaded in base class we have to use using X::func1; to use both the functions and remove compiler error
class X
{
    public:
        virtual void func1()
        {
            cout<<"This is x's function1"<<endl;
        }
        void func1(int x)
        {
            cout<<"Value of x - "<< x <<endl;
        }
        void func2()
        {
            cout<<"This is function2"<<endl;
        }
    private:
        int x;
};

class Y : public X
{
    public:
       virtual void func1()
        {
            cout<<"This is Y's function1"<<endl;
        }
        void func3()
        {
            cout<<"This is function3"<<endl;
        }
    private:
        int y;
};

int main()
{
    Y obj1;
    obj1.func1();
    obj1.func1(10);
    obj1.func2();
    obj1.func3();
    return 0;
}


/*Ouput:
g++ InheritanceWithtVirtual.cpp 
complilation Error
InheritanceWithtVirtual.cpp: In function 'int main()':
InheritanceWithtVirtual.cpp:42:18: error: no matching function for call to 'Y::func1(int)'
     obj1.func1(10);
                  ^
InheritanceWithtVirtual.cpp:42:18: note: candidate is:
InheritanceWithtVirtual.cpp:26:22: note: virtual void Y::func1()
         virtual void func1()
                      ^
InheritanceWithtVirtual.cpp:26:22: note:   candidate expects 0 arguments, 1 provided

*/