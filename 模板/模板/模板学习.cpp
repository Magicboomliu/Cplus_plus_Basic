#include<iostream>
#include"函数模板.h"
#include"函数模板的具体化.h"
#include"类模板的使用.h"
#include<string>
#include"类模板作为函数传递参数的方法.h"
#include"类模板的继承.h"
#include"类模板的类外定义.hpp"
#include"类内实现模板类的友元.h"
using namespace std;
int main(int argc, char**argv)
{
	//(1)函数模板
	//Function_tem ft;
	//ft.test();

	//（2）模板的具体化
	//Detailed_function_template dft1("Tom",12);
	//Detailed_function_template dft2("Tom", 13);
	//isEqual(dft1, dft2);
	//int a=10; int b=10;
	//isEqual<int>(a, b);

	////(3)类模板的声明与使用
	//Template_class<string,int> tc("liuzihu", 300);
	//tc.showinfo();

   // (4)类模板作为函数传递参数的方法
	//mytest4();

	//// (5) 类模板的继承
	////固定模板的特定类型进行继承
	//child1 c1("liuzihua", 123);
	//c1.show_parents();
	////（2）在继承的时候将派生类也变成一个模板类，不过还要声明父模板类的模板类型。
	//// T3,T4代表子类的模板，T2,T1代表父类的模板
	//child2<string,int,string,int> c2("liuzihua", 100, "liuzihua", 123);
	//c2.show_mine();
	//c2.show_parents();

	// (6)模板类的类外实现
	//OuterCall<string, int> oc ("Liuzihua", 100);
	//oc.printinfo();

	//(7)类内实现模板类的友元
	//Temm<string> ttt ("liuzihua");
	//visit(ttt);

	system("pause");
	return 0;
}