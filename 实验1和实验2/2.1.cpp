#include<iostream>
using namespace std;
int main()
{ 
	char ch;
	cout << "������һ����ĸ��";
	cin >> ch;
	if (ch >= 97 && ch <= 122)
	{
		cout << "ת��Ϊ��дΪ��" << char(ch - 32) << endl;
	}
	else
	{
		if (ch >= 41 && ch <= 90)
		{
			cout << "��ӦASCLL��Ϊ��" << int(ch) << endl;
		}
	}
	return 0;
}