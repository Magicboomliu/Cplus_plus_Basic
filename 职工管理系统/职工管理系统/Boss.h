#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"
#include<string>
class Boss : public Woker
{
public:
	// 构造函数
	Boss(int workID, string worker_name, int dept_ID);
	// 重写 show_info函数
	virtual void show_info();
	// 重写show_dept函数
	virtual string show_dept();

};