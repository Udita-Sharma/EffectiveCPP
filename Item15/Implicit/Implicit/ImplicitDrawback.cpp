//Programs for showing the drawback of implicit conversion over explicit oversion for an RAII class

#include<iostream>
using namespace std;
#include"conio.h"

class A{
    
    public:
		
        A getFont()
        {
            cout<<"A's getFont"<<endl;
			return *this;
           
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
         Font(A a):f(a)
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
    A a;
    Font f(a.getFont());  
    A a2= a;
    delete a;// output after removing delete
    /* A's getFont
    Font's ctor
    A's dtor
    A's getFont
    A's dtor
    */

    a2.getFont();//dangling ptr
	_getch();
    return 0;
    /* A's getFont
    Font's ctor
    A's dtor
    A's dtor
    A's getFont
    A's dtor
    */

}