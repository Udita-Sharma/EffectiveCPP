//Assignment operator should always return a reference to *this

#include<iostream>
using namespace std;

class A
{
    public:
        A():a(0)
        {
            cout<<"A's deafult ctor"<<endl;
        }
        A& operator=(const A &rhs);
        A& operator=(int rhs);
        
        ~A(){}
    private:
        int a;
};

A& A::operator=(const A &rhs)
        {
            a=rhs.a;
            cout<<"A::rhs = "<<rhs.a<<endl;
            return *this;
            
        }
        
A& A::operator=(int rhs)
{
    a=rhs;
    cout<<"int::rhs = "<<rhs<<endl;
    return *this;
    
}

int main()
{
    A x,y,z;
    int i = 10;
    x =  y = z = i;
    return 0;
}
    

    
    
  
    