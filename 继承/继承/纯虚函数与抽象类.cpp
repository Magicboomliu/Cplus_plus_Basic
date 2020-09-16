//在父类中的虚函数实际没有意义，我们可以不写实际的功能代码，让其等于0,
//变为一个纯虚函数，含有纯虚函数的类为抽象类。
//
//特点：
//（1）抽像类不能实例化对象
//（2）抽象类的子类必须重写虚函数对用的函数，不然也视为抽象类。

// *****************************************************************************//
#include<iostream>
using namespace std;
#include<string>

class Student {   // 含有纯虚函数，因此Student为一个抽象类
public:
	// 纯虚函数
	virtual void homework() = 0;
	virtual void paper() = 0;
	virtual void competion() = 0;
	virtual void salary() = 0;
};
// 派生类Tsinghua_student 继承 Student
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
// 派生类Scut_stent 继承 Student
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

// 父类指针引用子类的方法
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
