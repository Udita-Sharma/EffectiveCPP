

#include<iostream>
using namespace std;

class Investment
{
    public: 
    ~ Investment()
    {
        cout<<"Destructor called"<<endl;
    }
   
};

 Investment *createInv()
    {
        //Investment *pInv;
        //cout<<"CreateInv"<<endl;
        //return pInv;
    }
    
     void f()
    {
        //Investment *pInv = createInv();
        std::auto_ptr<Investment> pInv(createInv());
        //return; //If we add this code the destructor of Pinv will never be called, hence the heap will never get free
        delete pInv;
    }
int main()
{
    f();
    /*Output:
    Destructor called*/
    
    return 0;
}