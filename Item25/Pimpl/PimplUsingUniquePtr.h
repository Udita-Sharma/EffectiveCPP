#include<iostream>
#include<memory>
using namespace std;

class Widget
{
public:
	Widget();
	void callPimpl();
	
private:
	class WidgetImpl;
	std::unique_ptr<WidgetImpl> pimpl;
};