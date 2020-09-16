#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Myclass01 {
public:
	Myclass01(int a,string b){
		this->atrib1 = a;
		this->atrib2 = b;
	};
	int atrib1;
	string atrib2;
};

void myprint1(Myclass01 mc) {

	cout << "Atrib1:" << mc.atrib1 << "\t" << "Atrib2: " << mc.atrib2 << endl;

}
void test02() {
	// 储存自定义的数据类型
	vector<Myclass01> v1;
	v1.push_back(*new Myclass01(22, "liu"));
	v1.push_back(*new Myclass01(23, "liu"));
	v1.push_back(*new Myclass01(22, "liu"));
	//遍历
	for_each(v1.begin(), v1.end(), myprint1);

}