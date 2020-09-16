//本文件为worker的抽象类，用来作为普通员工，经理与老板的基类
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Woker {
public:
	// 基本的方法
	//显示个人信息
	virtual void show_info() = 0;
	//显示岗位信息
	virtual string show_dept() = 0;
    // 基本的属性
	//职工编号
	int workID;
   //职工姓名
	string name;
	//职工的部门编号
	int dept_ID;

};