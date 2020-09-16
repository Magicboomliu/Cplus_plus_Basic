#include<iostream>
#include "Manager.h"
using namespace std;

//实现构造函数
Manager::Manager(int workerID, string worker_name, int deptID)
{
	this->workID = workerID;
	this->name = worker_name;
	this->dept_ID = deptID;

}
//实现show_info方法
void Manager::show_info() {
	cout << "职员的工作ID: " << this->workID << "\t 职员的名字为:" << this->name
		<< "\t 部门的类型为：" << this->dept_ID << "\t 职位描述为： " << this->show_dept()
		<< endl;;
}
// 实现show_dept方法
string Manager::show_dept() {
	string s;
	s = "一个部门的经理，管理一个部门，完成老板给的任务";
	return s;
}