#pragma once
#include<iostream>
using namespace std;

class Function_tem
{
public:
	//����һ��ģ�庯�����ڽ���
	template<typename T>
	void myswap(T&a, T&b);
	//����һ��ģ��
	template<class T>
	// ����һ�������ģ�庯��
	void mysort(T myarray[], int len);
	//����һ����ӡ��ģ�庯��
	template<class T>
	//����Ĳ���������ģ����
	void ww(T myarry[], int len);
	// д���Ժ���
	void test();

private:

};

