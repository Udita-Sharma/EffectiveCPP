#include<iostream>
using namespace std;

class mutableExample
{
public:
	const void function() const
	{
		//i = 10; We cannot change i
		/*
		Mutable.cpp:9:5: error: assignment of member ‘mutableExample::i’ in read-only object
		i = 10;
		*/
		x = 11;
	}
private:
	int i;
	mutable	int x;
};

int main()
{
	mutableExample m1;
	m1.function();
	return 0;
}