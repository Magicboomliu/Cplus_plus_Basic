#pragma once
#include<iostream>
#include<queue>
using namespace std;
void test05()
{
	queue<int> myque;

	// ͷ��ɾ����β������
	myque.push(10000);
	myque.push(10001);
	myque.push(10002);
	myque.push(10003);

	myque.pop();

	//����ͷ����β��
	myque.front();
	myque.back();

}