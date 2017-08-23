//WAP to create heap only object

#include<iostream>
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

	void cleanUp()
	{
		delete this;
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
	a1->cleanUp();



	return 0;
}
/*output
CTOR
DTOR
*/