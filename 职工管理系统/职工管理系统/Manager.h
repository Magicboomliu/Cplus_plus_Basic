#pragma once
#include<iostream>
#include "Worker.h"
#include<string>
using namespace std;

class Manager :public Woker
{
public:
	//���캯��
	Manager(int workerID, string worker_name, int deptID);
	// ��������
	~Manager();

	// ��д show_info����
	virtual void show_info();
	// ��дshow_dept����
	virtual string show_dept();

};