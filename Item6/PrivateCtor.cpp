//Program to make copy ctor and copy assigment operator private and show how still friend function can use it

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {}
        friend void friendFunction();
    private:
        A(const A&);//to avoid objects a1(a2)
        A & operator =(const A&);//to avoid object construction with a1=a2
};
void friendFunction()
{
    A a1;
    A a2(a1);
    //we get a linker error on old compilers but since this is new we get it at compile time only, but to move it to compiler error see Uncopyable.cpp
    //C:\cygwin64\tmp\ccEoxNk1.o:PrivateCtor.cpp:(.text+0x1c): undefined reference to `A::A(A const&)'

}
int main()
{
    friendFunction();    
    
    return 0;
}