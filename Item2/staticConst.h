#include<iostream>
using namespace std;
//decalartion of static in header file
class A
{

    public:
        A():i(0)
        {
            cout<<"Hello"<<mem1;//mem1 is static const, its scope is till program execution
        }
    private:
        static const double mem1;
        int i;
};