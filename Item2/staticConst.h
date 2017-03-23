#include<iostream>
using namespace std;
//decalartion of static in header file
class A
{

    public:
        A():i(0)
        {
            cout<<"Hello"<<mem1;
        }
    private:
        static const double mem1;
        int i;
};