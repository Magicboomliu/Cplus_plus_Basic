#include<iostream>
#include"����ģ��.h"
#include"����ģ��ľ��廯.h"
#include"��ģ���ʹ��.h"
#include<string>
#include"��ģ����Ϊ�������ݲ����ķ���.h"
#include"��ģ��ļ̳�.h"
#include"��ģ������ⶨ��.hpp"
#include"����ʵ��ģ�������Ԫ.h"
using namespace std;
int main(int argc, char**argv)
{
	//(1)����ģ��
	//Function_tem ft;
	//ft.test();

	//��2��ģ��ľ��廯
	//Detailed_function_template dft1("Tom",12);
	//Detailed_function_template dft2("Tom", 13);
	//isEqual(dft1, dft2);
	//int a=10; int b=10;
	//isEqual<int>(a, b);

	////(3)��ģ���������ʹ��
	//Template_class<string,int> tc("liuzihu", 300);
	//tc.showinfo();

   // (4)��ģ����Ϊ�������ݲ����ķ���
	//mytest4();

	//// (5) ��ģ��ļ̳�
	////�̶�ģ����ض����ͽ��м̳�
	//child1 c1("liuzihua", 123);
	//c1.show_parents();
	////��2���ڼ̳е�ʱ��������Ҳ���һ��ģ���࣬������Ҫ������ģ�����ģ�����͡�
	//// T3,T4���������ģ�壬T2,T1�������ģ��
	//child2<string,int,string,int> c2("liuzihua", 100, "liuzihua", 123);
	//c2.show_mine();
	//c2.show_parents();

	// (6)ģ���������ʵ��
	//OuterCall<string, int> oc ("Liuzihua", 100);
	//oc.printinfo();

	//(7)����ʵ��ģ�������Ԫ
	//Temm<string> ttt ("liuzihua");
	//visit(ttt);

	system("pause");
	return 0;
}