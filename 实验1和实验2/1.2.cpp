#include<iostream>
#define PI 3.14//����Բ����
using namespace std;
int main()
{
	double r, h;
	cout << "������Բ׶�װ뾶��׶��:";
	cin >> r >> h;
	double V;
	V = ( PI *r* r* h)/3;
	cout<<"��ӦԲ׶���Ϊ��" << V << endl;
	return 0;
}