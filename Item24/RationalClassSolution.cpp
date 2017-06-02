#include<iostream>
using namespace std;

class Rational
{
public:
	Rational(int num, int denom = 1) :m_num(num), m_denom(denom)
	{}
	Rational() :m_num(0), m_denom(1)
	{}
	
	void display()
	{
		cout << endl << "Numerator is: " << m_num << "    " << "Denominator is: " << m_denom;
	}
	int numerator()const
	{
		return m_num;
	}
	int denominator()const
	{
		return m_denom;
	}
	
private:
	int m_num;
	int m_denom;
};

Rational operator*(const Rational &lhs, const Rational &rhs)
{
	return Rational((lhs.numerator() * rhs.numerator()), (lhs.denominator() * rhs.denominator()));
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
	Rational multiplication2 = 2 * oneEight;//works fine
	multiplication2.display();
	return 0;
}

/*------------Output------------
Numerator is: 1    Denominator is: 8
Numerator is: 1    Denominator is: 3
Numerator is: 1    Denominator is: 24
Numerator is: 2    Denominator is: 8
Numerator is: 2    Denominator is: 8
*/