//Program to show the necessity of making the return type as const of a function
//not working
#include<iostream>
using namespace std;

class Rational
{
    public:
        Rational(int x):i(x)
        {}
        Rational operator = (Rational& x)
        {
            cout<<"operator ="<<endl;
             this->i = x.i;
             return *this;
        }
        int getValue()
        {
            return i;
        }
    private:
    int i;
};


 Rational operator * (Rational& lhs, Rational& rhs)
{
    cout<<"Operator*"<<endl;
    Rational temp(lhs.getValue() * rhs.getValue());
    
    return temp;
}  
    
    
    
int main()
{
    
    Rational a(10);
    Rational b(10);
    //Rational c(0);
    Rational temp = a * b;
    //c = temp;
    //c = (a * b);
    cout<<temp.getValue();
   /*  if( (a * b) = c) 
    {
        cout<<"a * b is same as c";
    }
    else
        cout<<"a * b is not same as c"; */
    
    return 0;
}