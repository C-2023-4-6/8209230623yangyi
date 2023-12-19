#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X = 60, int Y = 80)
	{
		x = X;
		y = Y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "×ø±êÎª£º" << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point a;
	a.setPoint(10, 20);
	a.display();
	return 0;
}