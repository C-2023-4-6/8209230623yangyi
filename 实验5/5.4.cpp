#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	int grade;
public:
	int getnum()             //访问num
	{
		return num;
	}
	int getgrade()            //访问grade
	{
		return grade;
	} 
	void getin()                  //输入学生学号和成绩
	{
		cin >> num >> grade;
	}
};
int max( Student* p)                          //选出成绩最高学生
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