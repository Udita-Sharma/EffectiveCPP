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
	
	ostream& print(ostream &out) const {
		out<<"x:"<<X<<" y:"<<Y;
	}

private:
	int X;
	int Y;
};

ostream& operator <<(ostream &out, const Point &p) {
	p.print(out);
	return out;
}

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
	Rectangle(Point p1, Point p2):pData(new RecData(p1,p2))
	{
	}
	const Point &upperLeft() const // notice const here
	{
		return pData->ulhc;
	}

	const Point &lowerRight() const // notice const here
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
	cout<< cord1 << endl;
	cout<< cord2 << endl;
	cout<< rec.upperLeft()<< endl;
	cout<< rec.lowerRight()<< endl;	
	rec.upperLeft().setX(50);//we get compiler error, but this is also not a right technique since we are telling the client that they can setX
	cout<< rec.upperLeft()<<endl;
	
	return 0;
}

/* Compiler error
Test1.cpp: In function ‘int main()’:
Test1.cpp:74:25: error: passing ‘const Point’ as ‘this’ argument discards qualifiers [-fpermissive]
  rec.upperLeft().setX(50);//Even though rec is const we can still modify it
*/