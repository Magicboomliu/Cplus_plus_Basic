#pragma once
#include<iostream>
using namespace std;

class Function_tem
{
public:
	//声明一个模板函数用于交换
	template<typename T>
	void myswap(T&a, T&b);
	//声明一个模板
	template<class T>
	// 声明一个排序的模板函数
	void mysort(T myarray[], int len);
	//声明一个打印的模板函数
	template<class T>
	//传入的参数可以是模板类
	void ww(T myarry[], int len);
	// 写测试函数
	void test();

private:

};

