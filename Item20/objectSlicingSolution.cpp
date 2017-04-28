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

void describe(Pet &p)//passed by reference
{
	cout<<p.getDesc();
}

int main()
{
	Dog d;
	describe(d);//Though we have passed dog(derived object) it prints Dog(derived object) since passed by refrence.
	return 0;
}
/*
g++ objectSlicingSolution.cpp
This is Dog class
*/