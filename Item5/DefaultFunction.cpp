//Program to show all the functions created by compiler

#include<iostream>
using namespace std;

class A
{
public:
	A()//Default ctor
	{
		cout << endl << "Default ctor";
	}

	~A()//Detor
	{
		cout << endl << "Default dtor";
	}

	A(const A &a)//copy ctor
	{
		cout << endl << "copy ctor";
	}

	A &operator =(const A &a)//copy assignment operator
	{
		cout << endl << "copy assignment operator";
	}
};

int main()
{
	A a;
	A a1 = a; //same as a(a1)
	a = a1;
	return 0;

}
/*output
Default ctor
copy ctor
copy assignment operator
Default dtor
Default dtor
*/