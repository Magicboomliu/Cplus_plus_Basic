#pragma once
#include<iostream>
#include<string>
using namespace std;

void test07()
{
	// 创建了一个包含两个属性的一个pair
	pair<string, int> mypair("liu Zihu", 23);

	// 输出每一个属性
	cout << mypair.first << " " << mypair.second << endl;;

}