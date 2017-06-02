//Program to show that if client calls self assignment by mistake. No need to copy the whole 

#include<iostream>
using namespace std;

class Bitmap
{};

class Widget
{
public:
	Widget & operator=(const Widget &rhs)
	{
		if(this == &rhs)//match address of this and rhs
		{
			cout<<"Called Self Assignment operator for itself"<<endl;
			return *this;
		}
		
		cout<<"copy one widget to another"<<endl;
		pb = new Bitmap(*rhs.pb);
		delete pb;
		return *this;
	}
private:
	Bitmap *pb;

};



int main()
{
	Widget w1;
	Widget w2;
	w2 = w1;//copy one widget to another
	w2 = w2;//Called Self Assignment operator for itself
	return 0;
}
/*output:
copy one widget to another
Called Self Assignment operator for itself
*/