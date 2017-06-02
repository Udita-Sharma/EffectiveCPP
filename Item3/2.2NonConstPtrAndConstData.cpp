//Program to check how constant works, can change ptr by poiunting to new ptr but cannot change the value of the ptr
#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int y = 30;
	const int *p=&x;
	int * q=&y;
	cout<<*p<<endl;
	
	p = q; //Works fine, we can change the pointing of ptr
	cout<<*p<<endl;
	
	
	//ERROR we cannot change the value holded by the pointer
	//*p = 100;
	//*p = &y; 
	//cout<<++*p<<endl;
	
	
	
	

	//x++;
	return 0;
}