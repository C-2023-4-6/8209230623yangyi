#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:
	int hour;
	int minute;
	int sec;
public:              // ���ݳ�ԱΪ���õ�
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
	Time t1;          //����t1ΪTime�����
	t1.getin();
	t1.getout();
	return 0;

}