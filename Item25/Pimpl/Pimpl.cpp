#include "Pimpl.h"

class Widget::WidgetImpl{
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
Widget::Widget()
	{
		pimpl = new WidgetImpl(1, 2, 3);
	}

void Widget::callPimpl()
	{
		cout << endl << "Widget function";
		pimpl->foo();
	}
int main()
{
	Widget obj1;
	obj1.callPimpl();
	return 0;
	
}

/*Widget function
Inside implentation class where actual logic is written sum of all variable is: 6
*/