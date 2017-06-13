#include<iostream>
using namespace std;

class Complex
{
	public:
		explicit Complex(int r=0, int i=0)
		{
			m_real = r;
			m_img = i;
		}
		
		void print()
		{
			cout<<"real - "<<m_real<<" +e -> "<< m_img<<endl;
		}
		
		int getReal()
		{
			return m_real;
		}
		int getImg()
		{
			return m_img;
		}
/*	Complex operator + (const Complex &obj)
	{
		Complex obj3;
		obj3.real = obj.real + real;
		obj3.img = obj.img + img;
		return obj3;
	}
	*/
	
	// always write private at last of class declaration 
	private:
		int m_real;
		int m_img;
	// as those are member variable use m_* to make it more readable and 
	// understandable that they belongs to a class data member.
};
// making function will violate encapsulation,
// use getter and setter as best practice.
Complex operator + (Complex complexObj1, Complex complexObj2) 
{
	return Complex((complexObj1.getReal()+complexObj2.getReal()),
					(complexObj1.getImg()+complexObj2.getImg()));
}
int main()
{
	Complex x1(10,2);
	Complex x2(20,3);
	x1.print();
	x2.print();
	Complex x3= x1+x2;
	x3.print();
	// now all expressions will work.
	x3 = x1 + (Complex)30;
	x3.print();
	
	//x3 = 40 + x1;
	//will not work since it is implicit conversion now we have restricted the constructor to not do implicit //conversion hence we cannot add a non complex object to complex class. If we have to add then we have to do a //static_cast as done above  (Complex)30
	//x3.print();
	return 0;
}
		