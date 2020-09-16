#pragma once
#include<iostream>
#include<deque> //是一个双向的队列
#include<algorithm> 
#include<string>
using namespace std;

void test04() {

	deque<int> mydeque;
	//可以头部进行插入，也可以在尾部进行插入
	mydeque.push_back(1000);
	mydeque.push_front(102);
	mydeque.push_back(1000);
	mydeque.push_front(10222);
	mydeque.push_back(1000);
	mydeque.push_front(102);
	mydeque.push_back(1000);
	mydeque.push_front(10222);
	// 排序前
	cout << "排序前" << endl;
	for (deque<int>::iterator it = mydeque.begin();it != mydeque.end();it++)
	{
		cout << *it << " ";

	}
	//排序: 注意这里要输入迭代器
	cout << "排序前" << endl;
	sort(mydeque.begin(), mydeque.end());
	// 排序后
	for (deque<int>::iterator it = mydeque.begin();it != mydeque.end();it++)
	{
		cout << *it << " ";

	}



}