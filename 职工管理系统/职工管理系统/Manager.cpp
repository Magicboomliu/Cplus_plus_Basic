#include<iostream>
#include "Manager.h"
using namespace std;

//ʵ�ֹ��캯��
Manager::Manager(int workerID, string worker_name, int deptID)
{
	this->workID = workerID;
	this->name = worker_name;
	this->dept_ID = deptID;

}
//ʵ��show_info����
void Manager::show_info() {
	cout << "ְԱ�Ĺ���ID: " << this->workID << "\t ְԱ������Ϊ:" << this->name
		<< "\t ���ŵ�����Ϊ��" << this->dept_ID << "\t ְλ����Ϊ�� " << this->show_dept()
		<< endl;;
}
// ʵ��show_dept����
string Manager::show_dept() {
	string s;
	s = "һ�����ŵľ�������һ�����ţ�����ϰ��������";
	return s;
}