#include<iostream>
#include<string.h>
using namespace std;

class Example
{
public:
	Example(string e)
	{
		cout<<"example of "<<e;
	}

	void g(Example &e)
	{
		//Example x(e);/*undefined reference to `Example::Example(Example&)'*/
	}

	friend void foo();
private:
	Example(Example &rhs);

	//Example(Example &rhs){} ->Works fine

};

int main()
{
	Example e("Hello");
	e.g(e);
	return 0;
}

void foo()
{
	Example e1("hi");
	//Example e(e1);// undefined reference to `Example::Example(Example&)'
}

//Note: Neither friend function nor member functions can call copy ctor if it is only declared and not defined
