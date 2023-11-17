#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F,C;
	cout << "输入华氏摄氏度：" ;
	cin >> F;
        C = int(((F - 32) / 1.8)*100+0.5)/100.0;//法一：四舍五入保留两位
	cout << "转化为摄氏温度为：" << C<< endl;
	cout << fixed<<setprecision(2) << C<< endl;//法二：保留两位
	return 0;


}
