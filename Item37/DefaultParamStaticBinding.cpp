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
		void drawShape(ShapeColour colour = Green) const {
			cout<<"Circle colour: "<< colour<<endl;
		}
};

class Rectangle : public Shape {
	public:
		void drawShape(ShapeColour colour = Blue) const {
			cout<<"Rectangle colour: "<< colour<<endl;
		}			
};

int main() {
	Shape *ps;
	
	Shape *pc = new Circle;
	pc->drawShape(Shape::Blue);	
	
	Shape *pr = new Rectangle;
	pr->drawShape();	//Because pr’s static type is Shape*
						//the default parameter value for this function call is taken from the Shape class, not the Rectangle class
	
	Rectangle *pr1 = new Rectangle;
	pr1->drawShape(); // pr1’s static type is Rectangle*, so default parameter of rectangle is taken
	
	return 0;
};

/*output:
Circle colour: 2
Rectangle colour: 0
*/
	