//���ļ�Ϊworker�ĳ����࣬������Ϊ��ͨԱ�����������ϰ�Ļ���
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Woker {
public:
	// �����ķ���
	//��ʾ������Ϣ
	virtual void show_info() = 0;
	//��ʾ��λ��Ϣ
	virtual string show_dept() = 0;
    // ����������
	//ְ�����
	int workID;
   //ְ������
	string name;
	//ְ���Ĳ��ű��
	int dept_ID;

};