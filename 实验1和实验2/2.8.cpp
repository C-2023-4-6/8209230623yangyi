#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a;
	int i;
	cout << "����������һ������";
	cin >> a;
	double x1 = a,x2;//ע��˴���a��ֵ��x1����ȷ��a��ֵ���ʲ�������cin֮��
	if (a < 0)
	{
		cout << "��ƽ����" << endl; 
	}
	else                                   //ԭ�������븺����0ʱ��������кܾ�û�д�
	{
		if (a == 0)
		{
			cout << "��ƽ����Ϊ��" << a << endl;
		}
		else
		{
			for (i = 1; ; ++i)
			{
				x2 = (x1 + a / x1) / 2;
				if (fabs(x2 - x1) < 1e-10)    //������1e-5����1e-10���Ǹ�С���Ǳ���6λ��Ч����
				{                             //��ѯ���֪cout�����������Ĭ�Ͼ���Ϊ6λ����1e-5��Χ��6λ�������Ѿ��㹻С�������Ѿ�������6λ�Ǿ�ȷ���ˣ������ڻ��ɱ�����С�ķ�Χʱ����Ĵ�һ��
					break;
				}
				x1 = x2;
			}
			cout << "��ƽ����Ϊ��" << x2 << endl;
		}
	}
	return 0;
}