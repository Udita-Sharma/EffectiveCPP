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
		cout << endl << "Inside implentation class where actual logic is written";
	}
private:
	int a, b, c;
	
};

class Widget
{
public:
	Widget(const Widget &rhs) :pimpl(rhs)
	{
		
	}
	Widget &operator=(const Widget &rhs)
	{
		*pimpl = *(rhs.pimpl);
	}
	void foo
private:
	WidgetImpl *pimpl;
};

int main()
{
	Widget &obj1;
	Widget &obj2(obj1);
	//std::swap(obj1, obj2);
}