#pragma once
#include<iostream>
using namespace std;

//使用参数化的类模板
template<class T1, class T2>
class Template_class 
{
public:
	//构造函数
	Template_class(T1 t1, T2 t2)
	{
		this->atrib1 = t1;
		this->atrib2 = t2;
	
	};
	// 显示信息
	void showinfo() {
		cout << this->atrib1 << "\t" << this->atrib2;
	};
	//声明2个属性
	T1 atrib1;
	T2 atrib2;

};
