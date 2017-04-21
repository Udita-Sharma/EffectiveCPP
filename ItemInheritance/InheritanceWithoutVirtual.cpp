#include<iostream>
using namespace std;
//In the below program class Y inherits class X. This is only inheritance. When we use virtual function then it is polymorphism. Polymorphism will happen only when there i inheritance.
//Also in below program if there is function overloading i.e. func1 is overloaded in base class then if we use func1() in class Y it will throw error
//no matching function for call to 'Y::func1(int) because compiler will hide func1(int x) from class Y. In this case we should use "using X::func1; in class Y.
class X
{
    public:
        void func1()
        {
            cout<<"This is function1"<<endl;
        }
        void func1(int x)
        {
            cout<<"value is -" << x <<endl;
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
        using X::func1;
        void func1()
        {
            cout<<"This is y's function1"<<endl;
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


/*
g++ InheritanceWithoutVirtual.cpp
Ouput:
This is function1
This is function2
This is function3
*/