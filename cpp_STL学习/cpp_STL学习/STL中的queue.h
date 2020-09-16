#pragma once
#include<iostream>
#include<queue>
using namespace std;
void test05()
{
	queue<int> myque;

	// 头部删除，尾部增加
	myque.push(10000);
	myque.push(10001);
	myque.push(10002);
	myque.push(10003);

	myque.pop();

	//返回头部与尾部
	myque.front();
	myque.back();

}