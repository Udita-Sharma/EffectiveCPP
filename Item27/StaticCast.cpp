#include<iostream>
#include<string>
using namespace std;

class Base {
	public:
		Base(int new_id):id(new_id){}
		virtual ~Base(){}
	private:
		int id;
};

class Derived : public Base {
	public:
		Derived(int new_id, string new_name):Base(new_id),name(new_name){}
		~Derived(){}
		const string& getName() {
			return name;
		}
	private:
		string name;
};

Base *getObject(bool returnDerived) {
	if(returnDerived) {
		return new Derived(1,"Apple");
	} else {
		return new Base(1);
	}
}

class X {};

int main() {
	Base *b = getObject(true); // We cannot print the name from base pointer, so
	Derived *d = static_cast<Derived*>(b); //static cast the base to derived object and
	cout<<d->getName(); // access the getName() will work since Derived is same type as Base
	X *x = static_cast<X*>(b); // static_cast will give a compile time error since X and Base are not of same type
	delete b;
	return 0;
}

/*output:
StaticCast.cpp: In function ‘int main()’:
StaticCast.cpp:38:26: error: invalid static_cast from type ‘Base*’ to type ‘X*’
*/