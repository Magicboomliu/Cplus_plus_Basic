#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class Class10
{
public:
	
	Class10(T);

private:
	T t1;
};

// 构造函数
Class10<string>::Class10(string s) {
	this->t1 = s;
}

//全局函数访问私有变量
