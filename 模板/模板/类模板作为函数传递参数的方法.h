#pragma once
#include<iostream>
using namespace std;
#include<string>

//   一共有三种方法：
//(1)指定传入的类型 (注意引用）
//(2)参数模板化
//（3）将类模板化作为引用


// 声明并且定义一个类模板
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

//(1)指定传入的类型 (注意引用）
void received_tem1(Myclass4<string ,int >&mc) {
	mc.show_info();
}
//(2)参数模板化
template<class T1,class T2>
void received_tem2(Myclass4<T1,T2 >&mc) {
	mc.show_info();
}
//（3）将类模板化作为引用
template<class T>
void received_tem3(T &mc) {
	mc.show_info();
}

//写一个测试函数
void mytest4() {

	Myclass4<string, int> mc1("Liuzihua", 23);

	//(1)指定传入的类型 (注意引用）
	received_tem1(mc1);
	//(2)参数模板化
	received_tem2(mc1);
	//（3）将类模板化作为引用
	received_tem3(mc1);
}