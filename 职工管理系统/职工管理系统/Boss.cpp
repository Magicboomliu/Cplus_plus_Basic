#include<iostream>
using namespace std;
#include "Boss.h"
#include<string>
//ʵ��Employee�Ĺ��캯��
Boss::Boss(int workID, string worker_name, int dept_ID)
{  //Ϊ�������Խ��и�ֵ
	this->workID = workID;
	this->name = worker_name;
	this->dept_ID = dept_ID;
}

// ʵ��show_info����
void Boss::show_info() {
	cout << "ְԱ�Ĺ���ID: " << this->workID << "\t ְԱ������Ϊ:" << this->name
		<< "\t ���ŵ�����Ϊ��" << this->dept_ID << "\t ְλ����Ϊ�� " << this->show_dept()
		<< endl;;

}
//ʵ��show_dept����
string Boss::show_dept()
{
	string s;
	s = "һ����˾���ϰ壬�������������˾";
	return s;
}