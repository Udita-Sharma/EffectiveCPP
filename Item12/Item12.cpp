/*Here if we define another data member than int x suppose int y; then in all the default ctor's we need to assign that also/
If we add int y; then paramerized ctor will look like 
Customer(int data1,int data2):x(data1),y(data2){}
*/

#include<iostream>
using namespace std;

class Customer
{
    protected:
        int x;
    public:
    
        Customer()
        {
            cout<<endl<<"Default ctor called";
        }
        
        Customer(int data):x(data)
        {
            cout<<endl<<"Parameterized ctor called: "<<x;
        }
        
        Customer(const Customer &rhs):x(rhs.x)
        {
            cout<<endl<<"Copy ctor: "<<x;
        }
        
        Customer &operator=(const Customer &rhs)
        {
            x = rhs.x;
            cout<<endl<<"assignment operator called: "<<x;
            return *this;
        }
        
        /*This is not a default assignment operator but when cc2=20 i.e. cc2(int 20) gets called compiler 
        searches for the exact function which takes int and hence calls this function and not 
        paramerized function followed by assignment operator
        Customer &operator=(const int &rhs)
        {
            x = rhs;
            cout<<endl<<"int assignment operator called: "<<x;
            return *this;
        }*/
            
};

int main()
{
    Customer cc1 = 10;
    Customer cc2(cc1);
    Customer cc3 = cc1;//calls copy ctor since cc3 is not yet created. Compiler is very smart, since it cannot call assig operator, it matches the next thing which can be suitable and it is copy ctor
    cc2 = 20;//calls param ctor and then assi operator because it first converts 20 into Customer then calls Customer &operator=(customer)
    cc3 = cc2;
    return 0;
}

/*compile:
g++ Item12.cpp

Parameterized ctor called: 10
Copy ctor: 10
Copy ctor: 10
Parameterized ctor called: 20
assignment operator called: 20
assignment operator called: 20
*/