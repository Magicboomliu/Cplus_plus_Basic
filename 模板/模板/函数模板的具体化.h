#pragma once
#include<iostream>
#include<string>
using namespace std;
// 为什么需要模板的具体化？有些非内置的数据类型没有办法直接进行某些操作，需要重载
//运算符， 或者通过模板的具体化进行解决
class Detailed_function_template {

public:
	
	Detailed_function_template(string,int);
	string name;
	int age;
	void test();
private:

	
};
// 判断2个数据类型是否相等 通用模板
template<class T>
void isEqual(T, T);
// 模板的具体化，当遇到输入为特定数据类型时，优先执行以下函数

template<>void isEqual(Detailed_function_template, Detailed_function_template);
