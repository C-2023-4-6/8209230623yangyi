#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char ch;
	cout << "����������:";
	cin >> a >> ch >> b;
	switch (ch)
	{
	case 43 :
		cout << "��Ϊ��" << a + b << endl;
		break;
	case 45:
		cout<< "��Ϊ��" << a - b << endl;
		break;
	case 42:
		cout<<"��Ϊ��" << a * b << endl;
		break;
	case 47:
		if (b == 0)                  //��������Ϊ0
		{
			cout << "����" << endl; break;
		}
		else
		{
			cout << "��Ϊ��" << a / b << endl;
			break;
		}
	case 37:
		if (a != int(a) || b != int(b))//ȡ�����������ݱ���Ϊ����
		{
			cout << "����" << endl;
			break;
		}
		else
		{
			cout << "��Ϊ��" << int(a) % int(b) << endl;
			break;
		}
	default:
		cout << "������Ƿ�" << endl;
	}
	return 0;

}