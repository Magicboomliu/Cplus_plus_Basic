#pragma once
#include<iostream>
#include<string>
using namespace std;
//  (1)����ʵ��ȫ�ֺ�������Ԫ
//
template<class T>
class Temm {

public:
	//����ʵ��
	friend void visit(Temm<string> &tem);
	Temm(T);

private:
	T atrib;
};

//ʵ�ֹ��캯��
Temm<string>::Temm(string s) {
	this->atrib = s;
}
//дһ��ȫ�ֺ���������ģ�����˽�����ݳ�Ա
void visit(Temm<string> &tem) {
	cout << tem.atrib << endl;
}

