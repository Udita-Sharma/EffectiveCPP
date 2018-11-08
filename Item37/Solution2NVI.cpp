#include<iostream>
using namespace std;

class Shape {
	public:
		enum ShapeColour { 
							Red, 
							Green,
							Blue
		};
		
		void draw(ShapeColour colour = Red) const {
		
			doDraw(colour);
		}
		
	private:
		virtual void doDraw(ShapeColour colour) const = 0;
};

class Circle : public Shape {
	public:
		void doDraw(ShapeColour colour) const { // Note default parameter set to Red in all derived classes
			cout<<"Circle colour: "<< colour<<endl;
		}
};

class Rectangle : public Shape {
	public:
		void doDraw(ShapeColour colour) const { // Note default parameter set to Red in all derived classes
			cout<<"Rectangle colour: "<< colour<<endl;
		}			
};

int main() {
	Shape *ps;
	
	Shape *pc = new Circle;
	pc->draw(Shape::Blue);	
	
	Shape *pr = new Rectangle;
	pr->draw();

	
	return 0;
};

/*output:
Circle colour: 2
Rectangle colour: 0
*/
	