//Program to see if const int *p is same as  int const * p will cpmiler give any error if both are same?

#include<iostream>
using namespace std;

void function1(const int* p)
{

	cout << *p << endl;
}

void function2(int * p)
{

	cout << *p << endl;
}

int main()
{
	int a = 10;
	const int *i = &a;//Note i is const, if i is not const then the code compiles

	function1(i);
	function2(i);//different way of calling but it is same as function1


	return 0;
}
/*output
3.AdvancedConcept.cpp: In function ‘int main()’:
3.AdvancedConcept.cpp:24:13: error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
function2(i);//different way of calling but it is same as function1
^
3.AdvancedConcept.cpp:12:6: note:   initializing argument 1 of ‘void function2(int*)’
void function2(int * p)

*/