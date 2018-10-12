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
	Derived *d = dynamic_cast<Derived*>(b); //Dynamic cast the base to derived object and
	cout<<d->getName(); // access the getName()
	X *x = dynamic_cast<X*>(b); // No error for this line, but at runtime it will fail if we try to access something since X is not deriving from base
	//static_cast will give a compile time error
	delete b;
	return 0;
}

/*output:
Apple*/