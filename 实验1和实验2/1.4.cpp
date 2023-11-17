#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testunint = 65534;
	cout << "output in unsigned int 1 type:"<<oct<< testunint<< endl;//<<oct八进制输出
        cout << "output in char type:" <<dec<< static_cast<char>(testunint) << endl;//注意将数据转换回十进制输出
	cout << "output in short type:" << static_cast<short>(testunint) << endl;//为什么结果为-2?:数据发生了溢出，65534的二进制表示为1111111111111110，在short中第一位表示符号，所以表示为负数，其对应的负数即为-2
	cout << "output in int type:" << static_cast<int>(testunint) << endl;
	cout << "output in double type:" << static_cast<double>(testunint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testunint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testunint << endl; //16进制输出
	float b = 3.2;
	cout << static_cast<int>(b) << endl;//实数转换为int
	system("pause");
	return 0;
}
