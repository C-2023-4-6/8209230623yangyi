#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double height;
public:
	void getin()                      //���볤����Ҫ��
	{
		cin >> length >> width >> height;
	}
	double countsV()                  //���㳤�������
	{
		double V;
		V = length * width * height;
		return V;
	}
	void getout()                //������������
	{
		cout <<"���Ϊ:" << countsV() << endl;
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