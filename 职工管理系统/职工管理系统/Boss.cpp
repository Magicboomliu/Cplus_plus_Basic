#include<iostream>
using namespace std;
#include "Boss.h"
#include<string>
//实现Employee的构造函数
Boss::Boss(int workID, string worker_name, int dept_ID)
{  //为共有属性进行赋值
	this->workID = workID;
	this->name = worker_name;
	this->dept_ID = dept_ID;
}

// 实现show_info函数
void Boss::show_info() {
	cout << "职员的工作ID: " << this->workID << "\t 职员的名字为:" << this->name
		<< "\t 部门的类型为：" << this->dept_ID << "\t 职位描述为： " << this->show_dept()
		<< endl;;

}
//实现show_dept函数
string Boss::show_dept()
{
	string s;
	s = "一个公司的老板，负责管理整个公司";
	return s;
}