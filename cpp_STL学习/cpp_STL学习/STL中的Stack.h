#pragma once
#include<iostream>
#include<stack>
using namespace std;

void test05()
{

	// 定义一个stack
	stack<int>stack01;
	// 入栈
	for (int i = 0;i < 5;i++) {

		stack01.push(i);
	}
	// 返回栈顶的元素
	cout << stack01.top() << endl;

	// 出栈
	if (!stack01.empty()) {

		stack01.pop();
		cout<<stack01.top()<<endl;
	}


}