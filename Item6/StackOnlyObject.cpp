//WAP to create heap only object ??NOT WORKING

#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
private:

	void* operator new(size_t size)
	{
		cout << "Overloaded new private" << endl;


	}
	
public:
	A()
	{
		cout << "CTOR" << endl;
	}
	~A()
	{
		cout << "DTOR" << endl;
	}

	
};



int main()
{
	A a1;

	/*A *a2 = new A();
	StackOnlyObject.cpp: In function ‘int main()’ :
		StackOnlyObject.cpp : 11 : 8 : error : ‘static void* A::operator new(size_t)’ is private
		void* operator new(size_t size)
		^
		StackOnlyObject.cpp : 37 : 16 : error : within this context
		A *a2 = new A();*/



	return 0;
}
/*output
CTOR
DTOR
*/