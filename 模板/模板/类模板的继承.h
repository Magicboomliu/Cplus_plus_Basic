#pragma once
#include<iostream>
#include<string>
using namespace std;
//����һ��ģ������Ϊ����
template<class T1,class T2>
class Base {
public:
	//�������캯��
	Base(T1 t1, T2 t2) {
		this->atrib1 = t1;
		this->atrib2 = t2;
	};
	//��������
	T1 atrib1;
	T2 atrib2;
};

//дһ��Base���������
// ��2�ּ̳з�ʽ��
//��1���ڼ̳е�ʱ����Ҫ������ģ�����ģ�����͡�
//��2���ڼ̳е�ʱ��������Ҳ���һ��ģ���࣬������Ҫ������ģ�����ģ�����͡�

//��1���ڼ̳е�ʱ����Ҫ������ģ�����ģ�����͡�
class child1 :public Base<string,int>
{
	
public:
	//���ø���ĺ��ι��췽��
	child1(string s, int a) :Base(s, a)
	{ 
		this->atrib1 = s;
		this->atrib2 = a;
	};

	void show_parents() {
		cout << this->atrib1 << "\t" << this->atrib2 << endl;
	}

};

//��2���ڼ̳е�ʱ��������Ҳ���һ��ģ���࣬������Ҫ������ģ�����ģ�����͡�

// T3,T4���������ģ�壬T2,T1�������ģ��
template<class T3,class T4, class T1,class T2>
class child2 :public Base<T1, T2>
{
public:
	      child2(T3 t3,T4 t4,T1 t1,T2 t2):Base<T1,T2>(t1,t2){
		    this->Base<T1,T2>::atrib1 = t1;
		    this->Base<T1,T2>::atrib2 = t2;
			this->atrib1 = t3;
			this->atrib2 = t4;

	}
	void show_parents() {
		cout<< this->Base<T1,T2>::atrib1<<"\t"<<this->Base<T1,T2>::atrib2<<endl;
	}
	void show_mine() {
		cout << this->atrib1 << "\t" << this->atrib2 << endl;
	}
	T3 atrib1;
	T4 atrib2;
};