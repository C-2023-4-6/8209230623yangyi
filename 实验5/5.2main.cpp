#include <iostream>             //��������ͷ�ļ���������
#include"student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	//Student stud1(007,"tcg",'m');            Ĭ�Ϲ��캯�����޲ε�                     
	stud.set_value(007, "tcg", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}