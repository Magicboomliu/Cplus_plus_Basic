#include<iostream>
#include<string>
using namespace std;
#include "����ģ��ľ��廯.h"
Detailed_function_template::Detailed_function_template(string name, int age)
{
	this->age = age;
	this->name = name;
}

// ͨ�õ��ж��Ƿ���ȵ�ģ�庯��
template<class T>
void isEqual(T a, T b) {
	if (a == b) {

		cout << "�������" << endl;
	}
	else {
		cout << "���߲����" << endl;
	}

}
// ģ��ľ��廯������������Ϊ�ض���������ʱ������ִ�����º���
template<>void isEqual(Detailed_function_template d1, Detailed_function_template d2) {

	if (d1.age == d2.age&&d2.name == d1.name) {
		cout << "�������" << endl;
	}
	else {
		cout << "���߲����" << endl;
	}

};