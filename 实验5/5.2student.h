class Student              //������
{
public:                   //���ó�Ա����ԭ������
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
