

#include<iostream>
#include <memory> 
using namespace std;

class Investment
{
    public: 
    ~ Investment()
    {
        cout<<"Destructor called"<<endl;
    }
    void removeInvPtr() {
        delete this;
    }
   
};

 Investment *createInv()
    {
        Investment *pInv = new Investment();
        cout<<"CreateInv"<<endl;
        return pInv;
    }
    
     void f()
    {
        //Investment *pInv = createInv();
        std::unique_ptr<Investment> pInv(createInv());
        return; //If we add this code the destructor of Pinv is still always called
        pInv->removeInvPtr();
    }
int main()
{
    f();
    /*Output:
    CreateInv
    Destructor called*/
    
    return 0;
}
