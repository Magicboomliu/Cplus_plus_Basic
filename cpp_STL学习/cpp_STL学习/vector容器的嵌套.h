#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test03() {

	//声明一个vector容器，vector容器内部的东西还是vector
	vector<vector<int>> MyBox;
	for (int i = 0;i < 5;i++) {
		vector<int> vec;
		for (int j = 0;j< 5;j++) {
			vec.push_back(i);
		}
		MyBox.push_back(vec);
	}
	cout << MyBox.size() << endl;
	//font（）返回容器中的第一个元素
	cout << MyBox.front().front() << endl;
 	// back()  返回容器中最后一个元素
	cout << MyBox.back().back() << endl;
	// 遍历这个类似于2维数据的东西
	for (int i = 0;i < MyBox.size();i++) {

		for (int j = 0;j < MyBox[i].size();j++) {

			cout << MyBox[i][j] << endl;
		}

	}


}