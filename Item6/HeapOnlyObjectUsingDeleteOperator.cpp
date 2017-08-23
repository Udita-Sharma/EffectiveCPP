//WAP to create heap only object ??NOT WORKING

#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
private:
	~A()
	{
		cout << "DTOR" << endl;
	}
public:
	A()
	{
		cout << "CTOR" << endl;
	}

	void operator delete(void *a)
	{
		cout << "Overloaded delete" << endl;
		::delete(a);

	}
};



int main()
{
	/*A a1;
	HeapOnlyObject.cpp:9 : 2 : error : ‘A::~A()’ is private
	~A()
	^
	HeapOnlyObject.cpp : 23 : 4 : error : within this context
	A a1;*/

	A *a1 = new A();
	delete a1;



	return 0;
}
/*output
CTOR
DTOR
*/