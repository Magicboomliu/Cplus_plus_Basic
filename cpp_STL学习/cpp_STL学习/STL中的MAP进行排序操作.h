#pragma once
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

// map����һ���Ѿ������õ�pair�ļ��ϣ�pair�ĵ�һ��Ԫ��Ϊkey,pair�ĵڶ���Ԫ��Ϊvalue
// Ĭ���ڲ���ʱ�򣬾��Ѿ�����key����������
//����<<�����
ostream& operator<<(ostream& out, map<string, int> mp)
{
	for (map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
	{
		cout << (*it).first << "  " << (*it).second << endl;
		
	}
	return out;

}


// ����º���
struct CmpByKeyLength {
	bool operator()(const string& k1, const string& k2)const {
		return k1.length() < k2.length();
	}
};

struct cmapByvalue {

	bool operator()(const pair<string, int>&p1,const pair<string, int>&p2)const {
		return p1.second > p2.second;

	}

};


void test08() {

	map<string, int>student_score;
	// ���ֲ��뷽ʽ
	pair<string, int> p1("Liu zihua", 100);
	student_score.insert(p1);
	
	student_score.insert(make_pair("Ma ge", 100));

	student_score["Li"] = 99;
	student_score["Lisa"] = 99;
	student_score["Bob"] = 99;
	
	//��ӡstudent_score��Ĭ�ϰ��յ�һ��������Ҳ����key�����ֵ�˳��
	cout << student_score << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;


	// �Զ��� key������ʽ

	map<string, int,CmpByKeyLength>student_score1;
	// ���ֲ��뷽ʽ
	pair<string, int> p2("Liu zihua", 100);
	student_score1.insert(p2);

	student_score1.insert(make_pair("Ma ge", 100));

	student_score1["Li"] = 99;
	student_score1["Lisa"] = 99;
	student_score1["Bob"] = 99;
	//��ӡ
	for (map<string, int>::iterator it = student_score1.begin();it != student_score1.end();it++)
	{

		cout << (*it).first << " " << (*it).second << endl;
	}

	cout<< "............................................................." << endl;
	
	// ����value ������

	// ˼· ��mapתΪpairs��ɵ�vector,ʹ��vector��sort������������
	vector<pair<string, int>> students_sore_vec;
	// ��map�е�Ԫ�ط���vector��ȥ
	students_sore_vec.assign(student_score.begin(), student_score.end());
	
	// ʹ�÷º��������ã���vector��������
	sort(students_sore_vec.begin(), students_sore_vec.end(), cmapByvalue());
    
	for (vector<pair<string, int>>::iterator it = students_sore_vec.begin();
		it != students_sore_vec.end();it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	




}
