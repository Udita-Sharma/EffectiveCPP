#include<iostream>
using namespace std;

class Person
{

public:
	int age() const //an implicit inline request, age is defined in class defination
	{
		return age;
	}
};


template<typename T>

inline const T& max(const T&a,const T&b) //inline defined explicitly
{
	return a<b?b:a;
}
