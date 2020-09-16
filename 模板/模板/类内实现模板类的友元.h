#pragma once
#include<iostream>
#include<string>
using namespace std;
//  (1)类内实现全局函数的友元
//
template<class T>
class Temm {

public:
	//类内实现
	friend void visit(Temm<string> &tem);
	Temm(T);

private:
	T atrib;
};

//实现构造函数
Temm<string>::Temm(string s) {
	this->atrib = s;
}
//写一个全局函数来访问模板类的私有数据成员
void visit(Temm<string> &tem) {
	cout << tem.atrib << endl;
}

