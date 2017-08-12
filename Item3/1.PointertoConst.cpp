//Program to see if const int *p is same as  int const * p will cpmiler give any error if both are same?

#include<iostream>
using namespace std;

void function1(const int* p)
{
	
    cout<<*p<<endl;
}

void function2(int const* p)
{
	
    cout<<*p<<endl;
}
 
int main()
{
    int a = 10;
    const int *i= &a;
    
    function1(i);
    function2(i);//different way of calling but it is same as function1
    
    
    return 0;
}
/*output
$ ./a.exe
10
10
*/