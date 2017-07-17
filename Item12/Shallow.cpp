//Shallow copy will not work till we define overloaded assignment operator speacially in case of pointers.
#include<iostream>
using namespace std;

class test
{
public:
	test();
	~test();
	void allocate(int n)
	{
		len = n;
		p = new int[n];
		for (int i = 0; i < n; i++)
			p[i] = 0;
	}
	void display()
	{
		for (int i = 0; i < len; i++)
			cout<<endl<<p[i];

	}
private:
	int *p;
	int len;
};

test::test() : p(NULL)
{}


test::~test()
{
	delete[]p;
}


int main()
{
	test t1;
	t1.allocate(2);
	t1.display();
	//test t3; //if we put the commented code compiler will not give any error but at runtime we will face core dump since t3 is not properly copied to t1;
	//t3 = t1;
	//t3.display();
	return 0;	
}
/*output
0
0
0
Aborted (core dumped)
*/