#pragma once
#include<iostream>
using namespace std;

//ʹ�ò���������ģ��
template<class T1, class T2>
class Template_class 
{
public:
	//���캯��
	Template_class(T1 t1, T2 t2)
	{
		this->atrib1 = t1;
		this->atrib2 = t2;
	
	};
	// ��ʾ��Ϣ
	void showinfo() {
		cout << this->atrib1 << "\t" << this->atrib2;
	};
	//����2������
	T1 atrib1;
	T2 atrib2;

};
