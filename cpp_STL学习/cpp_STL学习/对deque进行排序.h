#pragma once
#include<iostream>
#include<deque> //��һ��˫��Ķ���
#include<algorithm> 
#include<string>
using namespace std;

void test04() {

	deque<int> mydeque;
	//����ͷ�����в��룬Ҳ������β�����в���
	mydeque.push_back(1000);
	mydeque.push_front(102);
	mydeque.push_back(1000);
	mydeque.push_front(10222);
	mydeque.push_back(1000);
	mydeque.push_front(102);
	mydeque.push_back(1000);
	mydeque.push_front(10222);
	// ����ǰ
	cout << "����ǰ" << endl;
	for (deque<int>::iterator it = mydeque.begin();it != mydeque.end();it++)
	{
		cout << *it << " ";

	}
	//����: ע������Ҫ���������
	cout << "����ǰ" << endl;
	sort(mydeque.begin(), mydeque.end());
	// �����
	for (deque<int>::iterator it = mydeque.begin();it != mydeque.end();it++)
	{
		cout << *it << " ";

	}



}