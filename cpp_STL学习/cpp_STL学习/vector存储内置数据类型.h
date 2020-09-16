#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myprint(int val) {

	cout << val<<endl;
}

void test01() {
	//STEP1 : 声明一个Vector,类型为int
	vector<int> V1;          //可以不指定vector的长度
	vector<int>v2(10, 0);  // 可以指定vector的长度为10，第一个元素为0

	//  STEP2: 向Vector中添加内置的数据类型

	// 使用push_back 函数进行
	V1.push_back(10);
	V1.push_back(20);
	V1.push_back(30);
	// 直接循环赋值
	for (int i = 0;i < 10;i++) {
		v2[i] = i;
	}
	//使用Insert 函数在某个位置进行插值操作
	//V1.insert(V1.begin() + 3, 100); //在第四个位置插入100这个元素


	// STEP 3 遍历vector数组
	//需要使用迭代器  
	// 方法一：使用迭代器
	vector<int>::iterator itbeigin = v2.begin();
	vector<int>::iterator itEnd = v2.end();
	while (itbeigin != itEnd) {
		cout << *itbeigin << endl;
		itbeigin++;
	}

	cout << v2.size() << endl;
	 //方法2: 直接使用
	for (int i = 0;i < v2.size(); i++) 
	{
		cout << v2[i] << endl;
  }
	//使用内置算法
	for_each(v2.begin(), v2.end(), myprint);

}