#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myprint(int val) {

	cout << val<<endl;
}

void test01() {
	//STEP1 : ����һ��Vector,����Ϊint
	vector<int> V1;          //���Բ�ָ��vector�ĳ���
	vector<int>v2(10, 0);  // ����ָ��vector�ĳ���Ϊ10����һ��Ԫ��Ϊ0

	//  STEP2: ��Vector��������õ���������

	// ʹ��push_back ��������
	V1.push_back(10);
	V1.push_back(20);
	V1.push_back(30);
	// ֱ��ѭ����ֵ
	for (int i = 0;i < 10;i++) {
		v2[i] = i;
	}
	//ʹ��Insert ������ĳ��λ�ý��в�ֵ����
	//V1.insert(V1.begin() + 3, 100); //�ڵ��ĸ�λ�ò���100���Ԫ��


	// STEP 3 ����vector����
	//��Ҫʹ�õ�����  
	// ����һ��ʹ�õ�����
	vector<int>::iterator itbeigin = v2.begin();
	vector<int>::iterator itEnd = v2.end();
	while (itbeigin != itEnd) {
		cout << *itbeigin << endl;
		itbeigin++;
	}

	cout << v2.size() << endl;
	 //����2: ֱ��ʹ��
	for (int i = 0;i < v2.size(); i++) 
	{
		cout << v2[i] << endl;
  }
	//ʹ�������㷨
	for_each(v2.begin(), v2.end(), myprint);

}