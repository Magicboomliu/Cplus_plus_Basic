#pragma once
#include<iostream>
#include<string>

// 带模板类的声明与实现如果在一个文件中，则命名为.hpp
using namespace std;
template<class T1, class T2>
class OuterCall
{
public:
	//声明构造函数
	T2 atrib2;
	T1 atrib1;
	OuterCall(T1 atrib1, T2 atrib2);
	void printinfo();

private:
};
OuterCall<string, int>::OuterCall(string s, int a) {
	this->atrib1 = s;
	this->atrib2 = a;
}
void OuterCall<string, int>::printinfo() {
cout << this->atrib1 << "\t" << this->atrib2 << endl;
}