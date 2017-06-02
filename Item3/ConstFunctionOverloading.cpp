//Function can be overloaded if const and not

#include<iostream>
using namespace std;

class Example
{
    public:
        Example(string p):text(p)
        {}
        const char& operator [](int pos)const
        {
            cout<<"const [] opeartor called"<<endl;
            return text[pos];

        }
       char& operator [](int pos)
        {
             cout<<"non-const [] opeartor called"<<endl;
            return text[pos];
            
        }
        
    private:
    
        string text;
};
    
int main()
{
    Example ex1("abc");
    cout<<ex1[0]<<endl;
    const Example ex2("def");
    cout<<ex2[0]<<endl;
    ex1[0]='x';     //works fine
    cout<<ex1[0]<<endl;
    /*ex2[0]='y';     gives below error
    cout<<ex2[0]<<endl;
    
    ConstFunctionOverloading.cpp: In function 'int main()':
    ConstFunctionOverloading.cpp:37:11: error: assignment of read-only location 'ex2.Example::operator[](0)'
     ex2[0]='y';
    */
    
    
    return 0;
}