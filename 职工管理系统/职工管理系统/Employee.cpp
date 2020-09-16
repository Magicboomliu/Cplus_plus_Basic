#include<iostream>
using namespace std;
#include "Employee.h"
#include<string>
//实现Employee的构造函数
Employee::Employee(int workID, string worker_name, int dept_ID)
{  //为共有属性进行赋值
	this->workID = workID;
	this->name = worker_name;
	this->dept_ID = dept_ID;
}

// 实现show_info函数
void Employee::show_info() {
	cout << "职员的工作ID: " << this->workID << "\t 职员的名字为:" << this->name
		<< "\t 部门的类型为：" << this->dept_ID << "\t 职位描述为： " << this->show_dept()
		<< endl;;

}
//实现show_dept函数
string Employee::show_dept()
{
	string s;
	s = "普通的一个职工，完成经理布置的任务";
	return s;
}