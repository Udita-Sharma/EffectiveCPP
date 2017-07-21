#include<iostream>
using namespace std;

class Person
{};

class Student : private Person
{};

void eat(Person& p)
{
	cout << "eat";
}

int main()
{
	Person p;
	eat(p);// works fine ouput is eat
	Student s;
	eat(s);
	/*Example1.cpp:20:7: error: ‘Person’ is an inaccessible base of ‘Student’
	eat(s);
	*/
	return 0;
}