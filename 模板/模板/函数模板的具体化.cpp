#include<iostream>
#include<string>
using namespace std;
#include "函数模板的具体化.h"
Detailed_function_template::Detailed_function_template(string name, int age)
{
	this->age = age;
	this->name = name;
}

// 通用的判断是否相等的模板函数
template<class T>
void isEqual(T a, T b) {
	if (a == b) {

		cout << "二者相等" << endl;
	}
	else {
		cout << "二者不相等" << endl;
	}

}
// 模板的具体化，当遇到输入为特定数据类型时，优先执行以下函数
template<>void isEqual(Detailed_function_template d1, Detailed_function_template d2) {

	if (d1.age == d2.age&&d2.name == d1.name) {
		cout << "二者相等" << endl;
	}
	else {
		cout << "二者不相等" << endl;
	}

};