#include <iostream>
using namespace std;


class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	Point operator-=(const Point& ref)
	{
		this-> xpos -= ref.xpos;
		this-> ypos -= ref.ypos;
		return *this;
	}

	Point operator+=(const Point& ref2)
	{
		this-> xpos += ref2.xpos;
		this-> ypos += ref2.ypos;
		return *this;
	}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;

	}
};


int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);

	pos1 += pos2;
	pos1.ShowPosition();
	pos1 -= pos2;
	pos1.ShowPosition();
}