#include"iostream"
using namespace std;

class Point
{
public:
	Point(int x, int y) :X(x), Y(y)
	{}

	void setX(int x)
	{
		X = x;
	}

	void setY(int y)
	{
		Y = y;
	}

private:
	int X;
	int Y;
};

struct RecData
{
	Point ulhc;//upper left hand corner
	Point lrhc;//lower right hand corner
	
public:
	RecData(Point u, Point l) :ulhc(u), lrhc(l)
	{}
};

class Rectangle
{
public:
	Rectangle(Point p1, Point p2)
	{
	}
	Point &upperLeft() const
	{
		return pData->ulhc;
	}

	Point &lowerRight() const
	{
		return pData->lrhc;
	}
private:
	RecData* pData;

};

int main()
{
	Point cord1(0, 0);
	Point cord2(100, 100);
	const Rectangle rec(cord1, cord2);
	rec.upperLeft().setX(50);//Even though rec is const we can still modify it
	
	return 0;
}