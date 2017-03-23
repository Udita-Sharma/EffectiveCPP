//Make uncopyable class to avoid ctor access

#include<iostream>
using namespace std;

class Uncopyable
{
    protected:
        Uncopyable(){}
        ~Uncopyable(){}
    
    private:
        Uncopyable(const Uncopyable&);
        Uncopyable& operator=(const Uncopyable&);
};

class A:private Uncopyable
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
    A a2;
    a2=a1;// undefined reference to `A::operator=(A const&)'
    
}
int main()
{
    friendFunction();    
    
    return 0;
}