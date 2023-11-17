#include<iostream>
#define PI 3.14//定义圆周率
using namespace std;
int main()
{
	double r, h;
	cout << "请输入圆锥底半径和锥高:";
	cin >> r >> h;
	double V;
	V = ( PI *r* r* h)/3;
	cout<<"对应圆锥体积为：" << V << endl;
	return 0;
}