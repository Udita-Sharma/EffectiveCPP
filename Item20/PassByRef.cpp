#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<endl<<"Person ctor";
	}
	virtual ~Person()
	{
		cout<<endl<<"Person Dtor";
	}
private:
	char name;
};

class Student : public Person
{
public:
	Student()
	{
		cout<<endl<<"Student ctor";
	}
	~Student()
	{
		cout<<endl<<"Student dtor";
	}
	
private:
	char studentName;
};

bool validateStudent(const Student &s)
{
	cout<<endl<<"Validate Student";
}/*When calls goes out of validateStudent no dtor called since it is passed by reference*/

int main()
{
	Student s1;
	bool ok = validateStudent(s1);
	/*When calls goes out of main dtor called for Student s1
	 Student dtor
	Person Dtor*/
	return 0;
}
/*
g++ PassByRef.cpp
Person ctor
Student ctor
Validate Student
Student dtor
Person Dtor
*/

