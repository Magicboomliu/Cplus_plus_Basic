//什么是动态多态？

//-----在编译的时候再分配地址的继承方式为动态多态。
//要求在基类中要实现虚函数
//而在派生类中要重写该虚函数的同名函数，从而实现多态。（返回值类型、名称、参数列表）

// 什么时候使用动态多态？
//  ---- 父类的指针或者是引用，指向派生类的同名成员函数时，需要使用动态多态，引入虚函数。

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
	// 重写homework类
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
//如果传入的参数为Tsinghua, 则父类使用指针或是引用调用派生类的方法
void basic_ability_ptr(Student &st)
{  
	st.homework();

}


// 测试函数
void test()
{
	Tsinghua NB;
	//不写Virtual函数普通调用, 返回的将是父类的homework;
	basic_ability(NB);
	//写Virtual函数使用指针调用, 返回的将是子类的homework; --> 动态多态
	basic_ability_ptr(NB);


}




//int main(int agrc, char** argv)
//{
//	test();
//	system("pause");
//	return 0;
//}
