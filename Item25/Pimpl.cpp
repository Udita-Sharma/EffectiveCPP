//Pimpl (pointer to implelemtation) idiom
#include<iostream>
using namespace std;

class WidgetImpl
{
public:
	WidgetImpl(int x, int y, int z) :a(x), b(y), c(z)
	{}
	void foo()
	{
		cout << endl << "Inside implentation class where actual logic is written sum of all variable is: ";
		cout << a + b + c;
	}
private:
	int a, b, c;
};

class Widget
{
public:
	Widget()
	{
		pimpl = new WidgetImpl(1, 2, 3);
	}

	void foo()
	{
		cout << endl << "Widget function";
		pimpl->foo();
	}
	
private:
	WidgetImpl *pimpl;
};

int main()
{
	Widget obj1;
	obj1.foo();
	return 0;
	
}