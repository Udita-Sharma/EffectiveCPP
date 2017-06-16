/*The difference between pointer and reference is that pointer once assigned to an object can point to another object
But reference once assigned to one object will always point to that object and cannot be referered to another object
Thus if we dnt use initialization list, garbage value will be set to refernce and then when ctor tries to assign
value to reference it will throw error, hence it is mandatory to use init list when having reference as data member*/

#include<iostream>
using namespace std;

class A
{
public:

	/*A(int &x) THROWS ERROR
	{
		a = x; 
		InitList1.cpp:12:2: error: uninitialized reference member in ‘int&’ [-fpermissive]
		A(int &x)
		^
		InitList1.cpp:17:7: note: ‘int& A::a’ should be initialized
		int &a;
	}*/

	A(int &x) :a(x) //WORKS FINE
	{}


private:
	int &a;
};

int main()
{
	int a = 3;
	int &x = a;
	A obj1(x);
	return 0;
}