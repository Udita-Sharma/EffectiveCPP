//What is the size of a class when it is empty

#include<iostream>
using namespace std;

class Empty
{
    public:
        int y;//data memeber y declared later
        Empty()
        {}
        void function()
        {
            int x;//not a data memeber since it is destroyed once function ends.
            cout<<"Hello"<<endl;
        }
        
};

int main()
{
    Empty e1;//Default ctor constructed by compiler
    Empty e2(e1);//Default Copy ctor constructed by compiler but size still remains same
    cout<<sizeof(e1)<<endl<<sizeof(e2);//size if 1 of each object till we dnt declare any data member
    //after decalring y the size changes to 4
    return 0;
}