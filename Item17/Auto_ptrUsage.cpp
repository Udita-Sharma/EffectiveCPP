//using smart pointer

#include<iostream>
#include<memory>
using namespace std;

class A
{
private:
	int x;
	int y;
	double d;

public:
	A(int a, int b, double c) :x(a), y(b), d(c)
	{
		cout << "ctor called: " << x <<endl<< y <<endl<< d<<endl;
	}
	~A(){
		cout << "Detor called";
	}
};

int func()
{
	return 1;

}

int function(auto_ptr<A> ptr, int x=0)
{
	cout <<"function: "<< x<<endl;

}
int main()
{
	auto_ptr<A>a1(new A(1, 2, 10.7));
	function(a1, func());

	//above statement is better than this below
	//function(auto_ptr<A>(new A(1, 2, 10.7)), func());
	return 0;
}
/*ctor called: 1
2
10.7
function: 1
Detor called
*/