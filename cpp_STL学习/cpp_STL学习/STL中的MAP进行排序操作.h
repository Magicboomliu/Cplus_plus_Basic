#pragma once
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

// map就是一堆已经创建好的pair的集合，pair的第一个元素为key,pair的第二个元素为value
// 默认在插入时候，就已经按照key进行了排序
//重载<<运算符
ostream& operator<<(ostream& out, map<string, int> mp)
{
	for (map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
	{
		cout << (*it).first << "  " << (*it).second << endl;
		
	}
	return out;

}


// 定义仿函数
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
	// 多种插入方式
	pair<string, int> p1("Liu zihua", 100);
	student_score.insert(p1);
	
	student_score.insert(make_pair("Ma ge", 100));

	student_score["Li"] = 99;
	student_score["Lisa"] = 99;
	student_score["Bob"] = 99;
	
	//打印student_score，默认按照第一个参数，也就是key排序，字典顺序
	cout << student_score << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;


	// 自定义 key的排序方式

	map<string, int,CmpByKeyLength>student_score1;
	// 多种插入方式
	pair<string, int> p2("Liu zihua", 100);
	student_score1.insert(p2);

	student_score1.insert(make_pair("Ma ge", 100));

	student_score1["Li"] = 99;
	student_score1["Lisa"] = 99;
	student_score1["Bob"] = 99;
	//打印
	for (map<string, int>::iterator it = student_score1.begin();it != student_score1.end();it++)
	{

		cout << (*it).first << " " << (*it).second << endl;
	}

	cout<< "............................................................." << endl;
	
	// 按照value 来排序

	// 思路 把map转为pairs组成的vector,使用vector的sort方法进行排序
	vector<pair<string, int>> students_sore_vec;
	// 把map中的元素放入vector中去
	students_sore_vec.assign(student_score.begin(), student_score.end());
	
	// 使用仿函数的引用，对vector进行排序
	sort(students_sore_vec.begin(), students_sore_vec.end(), cmapByvalue());
    
	for (vector<pair<string, int>>::iterator it = students_sore_vec.begin();
		it != students_sore_vec.end();it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	




}
