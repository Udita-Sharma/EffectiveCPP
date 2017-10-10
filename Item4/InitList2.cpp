/*when const is used that means we dnt want the value to be modified again and again
Thus if we dnt use initialization list, garbage value will be set to const data member and then when ctor tries to assign
value to the same data memebr it will throw error, hence it is mandatory to use init list when having const as data member*/

#include<iostream>
using namespace std;

class A
{
public:

	//A(int x) //THROWS ERROR
	//{
	//	a = x;	
	//	InitList2.cpp: In constructor ‘A::A(int)’ :
	//		InitList2.cpp : 12 : 2 : error : uninitialized const member in ‘const int’[-fpermissive]
	//		A(int x) //THROWS ERROR
	//		^
	//		InitList2.cpp : 22 : 12 : note : ‘const int A::a’ should be initialized
	//		const int a;
	//	^
	//		InitList2.cpp:14 : 5 : error : assignment of read - only member ‘A::a’
	//		a = x;

	//}

	A(int x) :a(x) //WORKS FINE
	{}


private:
	const int a;
};

int main()
{
	int a = 3;
	A obj1(a);
	return 0;
}