#include<iostream>
#include"函数模板.h"
using namespace std;
// 实现交换
template<class T>
void Function_tem::myswap(T&a, T&b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
//实现排序函数
template<class T>
void Function_tem::mysort(T myarray[], int len)
{  //选择排序
	    for (int i = 0;i < len;i++) {
		int max_ = i;
		for (int j = i + 1;j < len;j++) {
			if (myarray[j] >myarray[max_]) { max_ = j; }
		}

		if (max_ != i) {
			myswap<T>(myarray[i], myarray[max_]);
		}
	}
}
template<class T>
void Function_tem::ww(T myarry[], int len) {

	for (int i = 0;i < len; i++)
	{
		cout << myarry[i] << endl;
	}

}

void Function_tem::test() {
	char mychar[] = "sadwdawdafaf";
	int myint[] = { 1,2,3,4,5,6 };
	this->mysort<int>(myint, sizeof(myint) / sizeof(int));
	this->mysort<char>(mychar, sizeof(mychar) / sizeof(char));
	ww<int>(myint, sizeof(myint) / sizeof(int));
	cout << "***************************" << endl;
	ww<char>(mychar, sizeof(mychar) / sizeof(char));
}