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

// ���캯��
Class10<string>::Class10(string s) {
	this->t1 = s;
}

//ȫ�ֺ�������˽�б���
