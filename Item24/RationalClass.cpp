#include<iostream>
using namespace std;

class Rational
{
public:
	Rational(int num, int denom = 1) :m_num(num), m_denom(denom)//since denom is given default value its same as Rational(int num)
	{}/*ctor is deliberately not explicit; allows implicit int-to-Rational conversions*/
	/*Rational(int num) :m_num(num), m_denom(1)
	{}*/
	Rational() :m_num(0), m_denom(1)
	{}
	
	void display()
	{
		cout << endl << "Numerator is: " << m_num << "    " << "Denominator is: " << m_denom;
	}
	int numerator()
	{
		return m_num;
	}
	int denominator()
	{
		return m_denom;
	}
	Rational operator*(Rational rhs);
	
private:
	int m_num;
	int m_denom;
};

Rational Rational::operator*(Rational rhs)
{
	Rational multiply = Rational(((this->numerator()) * (rhs.numerator())), ((this->denominator()) * (rhs.denominator())));
	return multiply;
}

int main()
{
	Rational oneEight(1, 8);
	Rational oneThird(1, 3);
	oneEight.display();
	oneThird.display();
	Rational multiplication = oneEight * oneThird;
	multiplication.display();
	Rational multiplication1 = oneEight * 2;
	multiplication1.display();	
	/*Output
	Numerator is : 1    Denominator is : 8
	Numerator is : 1    Denominator is : 3
	Numerator is : 1    Denominator is : 24
	Numerator is : 2    Denominator is : 8*/

	/* 

	Rational multiplication2 = 2 * oneEight;
	multiplication2.display();

	---------------Output---------------
	$ g++ RationalClass.cpp
	RationalClass.cpp: In function ‘int main()’:
	RationalClass.cpp:56:31: error: no match for ‘operator*’ (operand types are ‘in ’ and ‘Rational’)
	Rational multiplication2 = 2 * oneEight;
	*/
	
	return 0;
}