#include<iostream>
using namespace std;

class Person {
public:
	Person(int a)
	{
		// 年龄
		Age = a;
	};
	//重载相等运算符
	bool operator==(const Person &p) {
		//判断是否相等
		if (this->Age == p.Age) {
			return true;
		}
		else { return false; }}
	// 重载不相等运算符
	bool operator!=(const Person& p) {
		if (this->Age!=p.Age)
		{	return true;}
		else
		{return false;}}
	//重载大于号运算符
	bool operator>(const Person&p) {
		if (this->Age > p.Age) { return true; }
		else
		{
			return false;
		}
	}
	// 重载小于运算符
	bool operator<(const Person&p) {
		if (this->Age < p.Age) { return true; }
		else
		{
			return false;
		}
	}

private:
	int Age;

};

//int main(int agrc, char** argv)
//{
//
//	system("pause");
//	return 0;
//}