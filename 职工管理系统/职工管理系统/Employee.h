#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"
#include<string>
class Employee : public Woker
{
public:
	// ���캯��
	    Employee(int workID,string worker_name,int dept_ID);
		// ��д show_info����
		virtual void show_info();
		// ��дshow_dept����
		virtual string show_dept();
		
};