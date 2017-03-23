//Program to check how constant works, both value and ptr cannot be changed
#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int y = 30;
	const int * const p=&x;
	int * q=&y;
	cout<<*p<<endl;

	//ERROR we cannot change the pointing of ptr since ptr is const and nor the value
	//*p = 20;
	//cout<<++*p<<endl;	
	//p = q; 

	return 0;
}