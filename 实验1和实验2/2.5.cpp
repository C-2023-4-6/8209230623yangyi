#include<iostream>
using namespace std;
int main()
{
	const int maxn = 10;//�����������ַ��������
	char ch[maxn];
	int a=0, b=0, c=0, d=0,i;
	cout << "������һ���ַ�:";
	for (i = 0; i < maxn; ++i)
	{
		cin.get(ch[i]);
		cin.get();       //�����������ո�ͻ��е�����
		if ((ch[i] >= 65 && ch[i] <= 90) || (ch[i] >= 97 && ch[i] <= 122))
		{
			++a;
		}
		else
		{
			if ((ch[i] >= 48 && ch[i] <= 57) || (ch[i] >= 171 && ch[i] <= 172))
			{
				++b;
			}
			else
			{
				if (ch[i] ==32)
				{
					++c;
				}
				else
				{
					++d;
				}
			}
		}

	}
	cout << "��Ӣ����ĸ����Ϊ��" << a << endl;
	cout << "�����ַ�����Ϊ��" <<b << endl;
	cout << "�ո����Ϊ��" << c << endl;
	cout << "�����ַ�����Ϊ��" << d << endl;
	return 0;

}