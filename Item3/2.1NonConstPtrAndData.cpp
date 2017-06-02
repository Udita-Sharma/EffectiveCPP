//Program to check how constant works
#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int y = 30;
	int *p=&x;
	int * q=&y;
	cout<<*p<<endl;

	x=20;//Works fine
	cout<<++*p<<endl;//Works fine
	p = q;//Works fine

	cout<<*p<<endl;
	

	//x++;
	return 0;
}

/*
output
10
21
30
*/
