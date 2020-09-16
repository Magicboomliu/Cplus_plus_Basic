#pragma once
#include<iostream>
#include<string>
using namespace std;
//声明一个模板类作为基类
template<class T1,class T2>
class Base {
public:
	//声明构造函数
	Base(T1 t1, T2 t2) {
		this->atrib1 = t1;
		this->atrib2 = t2;
	};
	//声明属性
	T1 atrib1;
	T2 atrib2;
};

//写一个Base类的派生类
// 有2种继承方式：
//（1）在继承的时候需要声明父模板类的模板类型。
//（2）在继承的时候将派生类也变成一个模板类，不过还要声明父模板类的模板类型。

//（1）在继承的时候需要声明父模板类的模板类型。
class child1 :public Base<string,int>
{
	
public:
	//调用父类的含参构造方法
	child1(string s, int a) :Base(s, a)
	{ 
		this->atrib1 = s;
		this->atrib2 = a;
	};

	void show_parents() {
		cout << this->atrib1 << "\t" << this->atrib2 << endl;
	}

};

//（2）在继承的时候将派生类也变成一个模板类，不过还要声明父模板类的模板类型。

// T3,T4代表子类的模板，T2,T1代表父类的模板
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