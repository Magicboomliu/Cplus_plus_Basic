#include<iostream>
using namespace std;

//定义一个person类
class Person
{
	// 定义友元的全局函数进行运算符的重载
	friend Person operator+(const Person&p1, const Person&p2);
	 friend  ostream& operator<<(ostream& cout, Person &p);

public:
	Person(int,int);
	//使用成员函数重载加法运算符
	Person operator+(const Person&p) //p1+p2 本质上调用方法为: p1.operator+(p2) 
	{
		Person temp(0,0);
		temp.age = this->age + p.age;
		temp.height = this->height + p.height;
		return temp;

	}

private:
	//定义私有属性
	int height;
	int age;

};
Person::Person(int a, int h)
{
	this->age = a;
	this->height = h;
};

//使用全局函数进行重载+号运算符， 本质上为 operator+(p1,p2)
Person operator+(const Person&p1, const Person&p2)
{
	Person temp(0,0);
	temp.age = p1.age + p2.age;
	temp.height = p1.height + p2.height;
	return temp;
	
}
// 使用全局函数重载<<运算符

ostream& operator<<(ostream& out, Person &p)
{
	// 输出Person数据类型的数据
	out << " Age: " << p.age << "  Height: " << p.height;
	return out;


}
void test_function()
{
	Person p1(18, 170);
	Person p2(20, 188);
	//使用重载的加法运算符
	Person p3 = p1 + p2;
	// 使用重载的<<运算符
	cout << p3 << endl;

}


// main函数
int main(int argc, char**argv)
{
	test_function();
	system("pause");

	return 0;
}