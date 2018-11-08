#include<iostream>
using namespace std;

class Shape {
	public:
		enum ShapeColour { 
							Red, 
							Green,
							Blue
		};
	virtual void drawShape(ShapeColour colour = Red) const = 0;
};

class Circle : public Shape {
	public:
		void drawShape(ShapeColour colour = Red) const { // Note default parameter set to Red in all derived classes
			cout<<"Circle colour: "<< colour<<endl;
		}
};

class Rectangle : public Shape {
	public:
		void drawShape(ShapeColour colour = Red) const { // Note default parameter set to Red in all derived classes
			cout<<"Rectangle colour: "<< colour<<endl;
		}			
};

int main() {
	Shape *ps;
	
	Shape *pc = new Circle;
	pc->drawShape(Shape::Blue);	
	
	Shape *pr = new Rectangle;
	pr->drawShape();

	
	return 0;
};

/*output:
Circle colour: 2
Rectangle colour: 0
*/
	