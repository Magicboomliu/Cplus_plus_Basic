//ʲô�Ƕ�̬��̬��

//-----�ڱ����ʱ���ٷ����ַ�ļ̳з�ʽΪ��̬��̬��
//Ҫ���ڻ�����Ҫʵ���麯��
//������������Ҫ��д���麯����ͬ���������Ӷ�ʵ�ֶ�̬��������ֵ���͡����ơ������б�

// ʲôʱ��ʹ�ö�̬��̬��
//  ---- �����ָ����������ã�ָ���������ͬ����Ա����ʱ����Ҫʹ�ö�̬��̬�������麯����

//*************************************************************//
#include<iostream>
#include<string>
using namespace std;

class Student {

public:
	  virtual  void homework()
	{
		cout << "He or She can do homework." << endl;
	}

};

class Tsinghua:public Student
{
public:
	Tsinghua();
	~Tsinghua();
	// ��дhomework��
	void homework()
	{
		cout << "He or She can do homework perfectly." << endl;
	}
	void paper()
	{
		cout << "He or She can wirte SCI papers" << endl;
	}

private:

};

Tsinghua::Tsinghua()
{
}

Tsinghua::~Tsinghua()
{
}


void basic_ability(Student st)
{
	st.homework();

}
//�������Ĳ���ΪTsinghua, ����ʹ��ָ��������õ���������ķ���
void basic_ability_ptr(Student &st)
{  
	st.homework();

}


// ���Ժ���
void test()
{
	Tsinghua NB;
	//��дVirtual������ͨ����, ���صĽ��Ǹ����homework;
	basic_ability(NB);
	//дVirtual����ʹ��ָ�����, ���صĽ��������homework; --> ��̬��̬
	basic_ability_ptr(NB);


}




//int main(int agrc, char** argv)
//{
//	test();
//	system("pause");
//	return 0;
//}
