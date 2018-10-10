//Pimpl (pointer to implelemtation) idiom
#include<iostream>
using namespace std;

class Widget
{
public:
	Widget();
	void callPimpl();
	
private:
	class WidgetImpl;
	WidgetImpl *pimpl;
};