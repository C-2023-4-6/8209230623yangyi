#include<iostream>
using namespace std;
int main()
{
	double a,b, c, C;
	cout << "���������߳���";
	cin >> a>> b>> c;
	C = a + b + c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "�޷�Χ��������" << endl;
	}
	else
	{
		cout << "�������е��ܳ�Ϊ��" << C << endl;
		if (a == b || b == c || a == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	return 0;
}