#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void getin()                      //输入长方体要素
	{
		cin >> length >> width >> height;
	}
	double countsV()                  //计算长方体体积
	{
		double V;
		V = length * width * height;
		return V;
	}
	void getout()                //输出长方体体积
	{
		cout <<"体积为:" << countsV() << endl;
	}
};
int main()
{
	Cuboid* p;
	p = new Cuboid[3];
	for (int i = 0; i < 3; i++)
	{
		p[i].getin();
		p[i].getout();
	}
	if (p != NULL)
	{
		delete[]p;
		p = NULL;
	}
	return 0;

}