//Program to check how constant works , cannot change the ptr but value of that ptr can be changed
#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int y = 30;
	int * const p=&x;
	int * q=&y;
	cout<<*p<<endl;

	*p = 20;//Worls fine, we can change the value holded by the ptr
	cout<<*p<<endl;
	cout<<++*p<<endl;
	
	//ERROR we cannot change the pointing of ptr since ptr is const
	//p = q; 

	
	

	//x++;
	return 0;
}