#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:              // 数据成员为公用的
	void getin()
	{
		cin >> hour >>minute >>sec;
	}
	void getout()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;          //定义t1为Time类对象
	t1.getin();
	t1.getout();
	return 0;

}