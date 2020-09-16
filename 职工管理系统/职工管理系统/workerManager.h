#pragma once //防止头文件反复被调用
#include<iostream>
#include"Worker.h"
#include"Boss.h"
#include"Employee.h"
#include"Manager.h"
#include<string>
#include<fstream>
#define FILENAME "employee_info.txt"
using namespace std;

class WorkerManager {
public:
	//判断文件是否为空，如果为空，则不能直接执行查、改、删除的操作
	bool FileisEmpty;
	//声明构造函数与析构函数
	WorkerManager();
	~WorkerManager();
	// 声明显示菜单的函数
	void show_menu();
	//退出系统函数
	void exitsystm();
	// 声明变量，记录职工的个数
	int num_employee;
	// 记录员工指针的数组
	Woker ** m_emparry ;
	//添加员工
	void add_employee();
	//保存职工的数据到文件中
	void save_to_file();
	//统计当前的文件中有多少行
	int get_employee_nums();
	// 初始化数据
	void init_op();
	//显示所有记录在案的职工的信息
	void show_employee_info();
	//根据职工的编号判断职工是否存在
	int   isExist(int);
	//删除员工
	void  Delete();
	// 修改员工
	void Modify_employee();
	//查找员工
	void search_employee();
	//对员工进行排序（按照工号）
	void sortedByWorkid(bool);
	//清空整个数据工程
	void clear();

};