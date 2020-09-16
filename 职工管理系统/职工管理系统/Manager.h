#pragma once
#include<iostream>
#include "Worker.h"
#include<string>
using namespace std;

class Manager :public Woker
{
public:
	//构造函数
	Manager(int workerID, string worker_name, int deptID);
	// 析构函数
	~Manager();

	// 重写 show_info函数
	virtual void show_info();
	// 重写show_dept函数
	virtual string show_dept();

};