#pragma once
#include<iostream>
#include<stack>
using namespace std;

void test05()
{

	// ����һ��stack
	stack<int>stack01;
	// ��ջ
	for (int i = 0;i < 5;i++) {

		stack01.push(i);
	}
	// ����ջ����Ԫ��
	cout << stack01.top() << endl;

	// ��ջ
	if (!stack01.empty()) {

		stack01.pop();
		cout<<stack01.top()<<endl;
	}


}