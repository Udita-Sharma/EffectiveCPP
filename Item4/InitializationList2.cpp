 /*if a class doesn't have a default constructor, or you have a const member variable, you must use an initialize list:*/

 #include<iostream>
using namespace std;
class A
{
    public:
        A(int x1) { x = x1; }
        int x;
};

class B
{
    public:
        B() : a(3), y(2)  // 'a' and 'y' MUST be initialized in an initializer list;
        {                 // it is an error not to do so
        
                        /* Error is: InitializationList2.cpp: In constructor 'B::B()':
                        InitializationList2.cpp:15:19: error: no matching function for call to 'A::A()'
                        B() :  y(2)  // 'a' and 'y' MUST be initialized in an initializer list;*/
        }
    private:
        A a;
        const int y;
};

int main()
{
    B b;
    
    return 0;
}