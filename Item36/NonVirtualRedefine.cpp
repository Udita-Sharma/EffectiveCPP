#include<iostream>
using namespace std;

class B {
	public:
		void mf(){ // try making it virtual and see the output
			cout<<"B's mf()"<<endl;
		}
};

class D : public B {
	public:
		void mf() {
			cout<<"D's mf()"<<endl;// since mf is non virtual it should not be redefined 
			//since every time we create an object of D,using B's pointer it will call B's mf instead of D
		}
};

int main() {
	D objectd;
	B *ptrB = &objectd;
	ptrB->mf();
	return 0;
}
/*output

B's mf()

*/