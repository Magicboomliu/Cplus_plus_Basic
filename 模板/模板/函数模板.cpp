#include<iostream>
#include"����ģ��.h"
using namespace std;
// ʵ�ֽ���
template<class T>
void Function_tem::myswap(T&a, T&b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
//ʵ��������
template<class T>
void Function_tem::mysort(T myarray[], int len)
{  //ѡ������
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