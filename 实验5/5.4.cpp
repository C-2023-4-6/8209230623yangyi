#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	int grade;
public:
	int getnum()             //����num
	{
		return num;
	}
	int getgrade()            //����grade
	{
		return grade;
	} 
	void getin()                  //����ѧ��ѧ�źͳɼ�
	{
		cin >> num >> grade;
	}
};
int max( Student* p)                          //ѡ���ɼ����ѧ��
{
	int t = 0;
	for (int i = 0; i < 5; i++)
	{
		if(p[i].getgrade()>p[t].getgrade())
		{
			t = i;
		}
	}
	return p[t].getnum();
}
int main()
{
	Student* p;
	p = new Student[5];
	for (int i = 0; i < 5; i++)
	{
		p[i].getin();
	}
	cout<<max(p);
	if (p != NULL)
	{
		delete[]p;
		p = NULL;
	}
	return 0;
}