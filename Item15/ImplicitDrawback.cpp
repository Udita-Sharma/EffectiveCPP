//Programs for showing the drawback of implicit conversion over explicit oversion for an RAII class

#include<iostream>
using namespace std;

class A{
    
    public:
        A getFont()
        {
            cout<<"A's getFont"<<endl;
           
        }
        void releaseFont(A a)
        {
            cout<<"A's release font"<<endl;
            
        }
        ~A()
        {
            cout<<"A's dtor"<<endl;
        }
        int a1;
};

class Font
{
    public:
        explicit Font(A a):f(a)
        {
            cout<<"Font's ctor"<<endl;
        }
        ~Font()
        {
            cout<<"Font's dtor"<<endl;
        }
        A get() const
        {
            return f;
        }
        
        private:
            A f;
};
            
    
int main()
{
    A *a1;
    Font f(a1->getFont());  
    A *a2= a1;
    //delete a1; output after removing delete
    /* A's getFont
    Font's ctor
    A's dtor
    A's getFont
    A's dtor
    Font's dtor
    A's dtor */

    a2->getFont();//dangling ptr
    return 0;
    /* A's getFont
    Font's ctor
    A's dtor
    A's dtor
    A's getFont
    A's dtor
    Font's dtor
    A's dtor */

}