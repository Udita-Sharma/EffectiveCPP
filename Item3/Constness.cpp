//Function can be overloaded if const and not

#include<iostream>
using namespace std;

class Example
{
    public:
        Example()
        {
            
        }
        Example setName(char *p)
        {
            text = new char();
            text = p;
        }
       /*  Example getName()
        {
            return text;
        } */
            
        const  char& operator [](int pos)const
        {
            cout<<"const [] opeartor called"<<endl;
            return text[pos];

        }
              
    private:
    
        char *text;
};
    
int main()
{
    char *name ="abc";
    Example ex1;
    ex1.setName(name);
    cout<<ex1[0]<<endl;
    /*char *p = &ex1[0];//Valid in bitwise constness
    *p = 'J';
    cout<<ex1[0]<<endl;*/
    
    
    
    return 0;
}