#include<iostream>
#include<string.h>

using namespace std;

class Pet
{
	public:
	virtual string getDesc()
	{
		return "This is Pet class";
	}
};

class Dog: public Pet
{
	public:
	virtual string getDesc()
	{
		return "This is Dog class";
	}
};

void describe(Pet p)//passed by value
{
	cout<<p.getDesc();
}

int main()
{
	Dog d;
	describe(d);//Though we have passed dog(derived object) still it prints Pet(Base object) since passed by Value.
	return 0;
}
/*
g++ objectSlicingProb.cpp
This is Pet class
*/