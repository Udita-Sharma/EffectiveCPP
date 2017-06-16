/* when inheritance is there and if we create only derived class object we have to pass as parameter for Base class data memeber
This is only possible through initliatization list*/

#include<iostream>
using namespace std;

class Base
{
public:
	Base(int x) :b(x)
	{
		cout << "b: "<<b;
	}
private:
	int b;
};

class Derived : public Base
{
public:
	Derived(int x, int y) :Base(x), d(y)
	{
		cout <<endl<<"d: "<< d;
	}

	/*Derived(int x, int y) FULL OF ERROR
	{
		Base(x);
		d = y;
	}
		InitList3.cpp: In constructor ‘Derived::Derived(int, int)’ :
			InitList3.cpp : 26 : 2 : error : no matching function for call to ‘Base::Base()’
		
			InitList3.cpp:10 : 2 : note : candidate : Base::Base(int)
			Base(int x) : b(x)
			
			InitList3.cpp : 10 : 2 : note : candidate expects 1 argument, 0 provided
			InitList3.cpp : 7 : 7 : note : candidate : Base::Base(const Base&)
			class Base
				
				InitList3.cpp : 7 : 7 : note : candidate expects 1 argument, 0 provided
				InitList3.cpp : 27 : 9 : error : declaration of ‘Base x’ shadows a parameter
				Base(x);
				*/
	
private:
	int d;
};

int main()
{
	Derived d(1, 2);
	return 0;
}
/*output: 
b: 1
d: 2
*/