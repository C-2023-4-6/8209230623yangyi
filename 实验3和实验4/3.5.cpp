#include<iostream>
using namespace std;
int mon(int day)
{
	if (day==0)
	{
		return 1;
	}
	else
	{
		 (mon(day - 1) + 1) * 2;
	}
}
int main()
{
	int day=10;
	cout << "ºï×ÓµÚÒ»ÌìÕªÌÒÎª£»" << mon(day);
	return 0;
}
