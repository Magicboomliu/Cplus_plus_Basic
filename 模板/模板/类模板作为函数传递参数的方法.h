#pragma once
#include<iostream>
using namespace std;
#include<string>

//   һ�������ַ�����
//(1)ָ����������� (ע�����ã�
//(2)����ģ�廯
//��3������ģ�廯��Ϊ����


// �������Ҷ���һ����ģ��
template<class T1, class T2>
class Myclass4
{
public:
	
	Myclass4(T1 t1, T2 t2) {
		this->my_ab1 = t1;
		this->my_ab2 = t2;}
	void show_info() {
		cout << this->my_ab1 << "\t" << this->my_ab2 << endl;
	}

	T1 my_ab1;
	T2 my_ab2;


};

//(1)ָ����������� (ע�����ã�
void received_tem1(Myclass4<string ,int >&mc) {
	mc.show_info();
}
//(2)����ģ�廯
template<class T1,class T2>
void received_tem2(Myclass4<T1,T2 >&mc) {
	mc.show_info();
}
//��3������ģ�廯��Ϊ����
template<class T>
void received_tem3(T &mc) {
	mc.show_info();
}

//дһ�����Ժ���
void mytest4() {

	Myclass4<string, int> mc1("Liuzihua", 23);

	//(1)ָ����������� (ע�����ã�
	received_tem1(mc1);
	//(2)����ģ�廯
	received_tem2(mc1);
	//��3������ģ�廯��Ϊ����
	received_tem3(mc1);
}