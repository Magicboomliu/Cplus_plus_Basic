#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test03() {

	//����һ��vector������vector�����ڲ��Ķ�������vector
	vector<vector<int>> MyBox;
	for (int i = 0;i < 5;i++) {
		vector<int> vec;
		for (int j = 0;j< 5;j++) {
			vec.push_back(i);
		}
		MyBox.push_back(vec);
	}
	cout << MyBox.size() << endl;
	//font�������������еĵ�һ��Ԫ��
	cout << MyBox.front().front() << endl;
 	// back()  �������������һ��Ԫ��
	cout << MyBox.back().back() << endl;
	// �������������2ά���ݵĶ���
	for (int i = 0;i < MyBox.size();i++) {

		for (int j = 0;j < MyBox[i].size();j++) {

			cout << MyBox[i][j] << endl;
		}

	}


}