#include<iostream>
using namespace std;
#include "Employee.h"
#include<string>
//ʵ��Employee�Ĺ��캯��
Employee::Employee(int workID, string worker_name, int dept_ID)
{  //Ϊ�������Խ��и�ֵ
	this->workID = workID;
	this->name = worker_name;
	this->dept_ID = dept_ID;
}

// ʵ��show_info����
void Employee::show_info() {
	cout << "ְԱ�Ĺ���ID: " << this->workID << "\t ְԱ������Ϊ:" << this->name
		<< "\t ���ŵ�����Ϊ��" << this->dept_ID << "\t ְλ����Ϊ�� " << this->show_dept()
		<< endl;;

}
//ʵ��show_dept����
string Employee::show_dept()
{
	string s;
	s = "��ͨ��һ��ְ������ɾ����õ�����";
	return s;
}