#include<iostream>
using namespace std;


typedef int ADD[4];

int main()
{
	int *p = new ADD;

	
	for(int i=0;i<4;i++)
		p[i]=(i+10);

	for(int i=0;i<4;i++)
		cout<<p[i]<<"	";

		//delete p; Will not delete all elements.
		delete[] p;//correct
	return 0;
}
//ouput - 10	11	12	13