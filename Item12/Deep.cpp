//Deep copy has overloaded assignment operator .
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
			cout << endl << p[i];

	}

	test* operator =(test &obj)
	{
		this->p = new int[obj.len];
		this->len = obj.len;
		for (int i = 0; i < obj.len; i++)
			this->p[i] = obj.p[i];
		return this;
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
	test t3; 
	t3 = t1;//no core dump
	t3.display();
	return 0;


}
/*output
0
0
0
0
*/