class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int Num,const char Name[],const char Sex)
	{
     	num = Num;
		strcpy_s(name, Name);
		sex = Sex;
	}
private:
	int num;
	char name[20];
	char sex;
	
}; 
