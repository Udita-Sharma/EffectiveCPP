#include<iostream>
using namespace std;

class Shape
{
public:
	virtual void draw() const = 0;
	/*virtual void draw() const it is possible to provide a definition for a pure virtual function
	{
		cout<<"shape draw"<<endl;
	}*/


};

class Rectangle: public Shape
{
public:
	void draw() const
	{
		cout<<"Rectangle draw"<<endl;
	}
};

int main()
{
	Rectangle *r = new Rectangle;
	r->draw();
	//r->Shape::draw();
	delete r;
	return 0;
}

