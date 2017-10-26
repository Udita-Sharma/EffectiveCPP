

#include<iostream>
using namespace std;

//class Uncopyable
//{
//    protected:
//        Uncopyable(){}
//        ~Uncopyable(){}
//    
//    private:
//        Uncopyable(const Uncopyable&);
//        Uncopyable& operator=(const Uncopyable&);
//};

class A
{
    public:
        A()
        {}
       // friend void friendFunction();

		 void accessCopyCtor(A &a)//Member function can still access the copy ctor
		{
			A a2(a);
		}
    private:
        A(const A&);//to avoid objects a1(a2)
        A & operator =(const A&);//to avoid object construction with a1=a2
};

int main()
{
   // friendFunction();    
    A a1;
	/*A a2(a1);
	Uncopyable1.cpp:37:9: error: ‘A::A(const A&)’ is private within this context
	*/
    return 0;
}

   

