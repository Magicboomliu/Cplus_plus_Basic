//�ڸ����е��麯��ʵ��û�����壬���ǿ��Բ�дʵ�ʵĹ��ܴ��룬�������0,
//��Ϊһ�����麯�������д��麯������Ϊ�����ࡣ
//
//�ص㣺
//��1�������಻��ʵ��������
//��2������������������д�麯�����õĺ�������ȻҲ��Ϊ�����ࡣ

// *****************************************************************************//
#include<iostream>
using namespace std;
#include<string>

class Student {   // ���д��麯�������StudentΪһ��������
public:
	// ���麯��
	virtual void homework() = 0;
	virtual void paper() = 0;
	virtual void competion() = 0;
	virtual void salary() = 0;
};
// ������Tsinghua_student �̳� Student
class Tsinghua_student :public Student {

public:
	virtual void homework() { cout << "He or she can do homework well" << endl; }
	virtual void paper() {
		cout << "He or she can write SCI or IEEE papers" << endl;
	}
	virtual void competion() {
		cout << "He or she  wins a lot of prizes" << endl;
	}
	virtual void salary() {
		cout << "He or she wins a high salary" << endl;
	}

};
// ������Scut_stent �̳� Student
class SCUT_student :public Student {
public:
	virtual void homework() { cout << "He or she can do homework" << endl; }
	virtual void paper() {
		cout << " Maybe he or she can write SCI or IEEE papers" << endl;
	}
	virtual void competion() {
		cout << "Maybe He or she  wins a lot of prizes" << endl;
	}
	virtual void salary() {
		cout << "Usually ,He or she wins a high salary" << endl;
	}

};

// ����ָ����������ķ���
void show_student_info(Student *st)
{ 
	st->homework();
	st->paper();
	st->competion();
	st->salary();
}

void test() {
	Tsinghua_student NB;
	SCUT_student LB;
	show_student_info(&NB);
	cout << "*************************" << endl;
	show_student_info(&LB);

}
int main(int agrc, char** agrv)
{
	test();
	system("pause");
	return 0;
}
