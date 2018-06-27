#include<iostream>
using namespace std;

class A {

	private:
		~A(){}
	public:
		A(){}
		void cleanup() {
			delete this;
		}
};

int main()
{
	A a1 = new A();
	a1->cleanup();
	return 0;
}
