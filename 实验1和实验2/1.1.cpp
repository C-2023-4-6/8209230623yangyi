#include<iostream>
using namespace std;
int main()
{
	int k = 0;//错误1：起初k没有定义
	int i = k + 1;
	cout << i++ << endl;
	i = 1;//错误2：i重复定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}