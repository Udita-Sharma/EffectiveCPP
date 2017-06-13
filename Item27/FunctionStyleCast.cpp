#include<iostream>
using namespace std;

class Widget
{
public:
	explicit Widget(int i) :m_i(i) // Widget ctor is defined explicit i.e. Widget ctor can only take int as parameter and implicit conversion( like passing double instead of int is not possible)
	{}
	int m_i;
};

void doSomeWork(const Widget& w)
{
	cout << endl << "Inside DoSomeWork: "<<w.m_i;
}

int main()
{
	doSomeWork(Widget(15));		//function style cast
	doSomeWork(static_cast<Widget>(11));	//static_cast
	return 0;
}
/*Somehow, deliberate object creation doesn’t “feel” like a cast, so I’d
probably use the function-style cast instead of the static_cast in this
case. (They do exactly the same thing here: create a temporary Widget
object to pass to doSomeWork.)*/

/*output:

Inside DoSomeWork: 15
Inside DoSomeWork: 11
*/