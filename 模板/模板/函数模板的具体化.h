#pragma once
#include<iostream>
#include<string>
using namespace std;
// Ϊʲô��Ҫģ��ľ��廯����Щ�����õ���������û�а취ֱ�ӽ���ĳЩ��������Ҫ����
//������� ����ͨ��ģ��ľ��廯���н��
class Detailed_function_template {

public:
	
	Detailed_function_template(string,int);
	string name;
	int age;
	void test();
private:

	
};
// �ж�2�����������Ƿ���� ͨ��ģ��
template<class T>
void isEqual(T, T);
// ģ��ľ��廯������������Ϊ�ض���������ʱ������ִ�����º���

template<>void isEqual(Detailed_function_template, Detailed_function_template);
