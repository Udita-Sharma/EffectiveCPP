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
	cout<< cord1 << endl;
	cout<< cord2 << endl;
	cout<< rec.upperLeft()<< endl;
	cout<< rec.lowerRight()<< endl;	
	rec.upperLeft().setX(50);//Even though rec is const we can still modify it
	cout<< rec.upperLeft()<<endl;
	
	return 0;
}

/*output
x:0 y:0
x:100 y:100
x:0 y:0
x:100 y:100
x:50 y:0
*/