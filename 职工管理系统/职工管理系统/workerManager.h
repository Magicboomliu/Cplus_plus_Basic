#pragma once //��ֹͷ�ļ�����������
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
	//�ж��ļ��Ƿ�Ϊ�գ����Ϊ�գ�����ֱ��ִ�в顢�ġ�ɾ���Ĳ���
	bool FileisEmpty;
	//�������캯������������
	WorkerManager();
	~WorkerManager();
	// ������ʾ�˵��ĺ���
	void show_menu();
	//�˳�ϵͳ����
	void exitsystm();
	// ������������¼ְ���ĸ���
	int num_employee;
	// ��¼Ա��ָ�������
	Woker ** m_emparry ;
	//���Ա��
	void add_employee();
	//����ְ�������ݵ��ļ���
	void save_to_file();
	//ͳ�Ƶ�ǰ���ļ����ж�����
	int get_employee_nums();
	// ��ʼ������
	void init_op();
	//��ʾ���м�¼�ڰ���ְ������Ϣ
	void show_employee_info();
	//����ְ���ı���ж�ְ���Ƿ����
	int   isExist(int);
	//ɾ��Ա��
	void  Delete();
	// �޸�Ա��
	void Modify_employee();
	//����Ա��
	void search_employee();
	//��Ա���������򣨰��չ��ţ�
	void sortedByWorkid(bool);
	//����������ݹ���
	void clear();

};