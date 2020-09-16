#include<iostream>
using namespace std;

//定义自己的整数类
class Myinteger {
	friend ostream& operator<<(ostream & out, const Myinteger& mi);
public:
	Myinteger(int);

	//重载前置++运算符
	Myinteger& operator++() // 返回引用的意义在于保证myint反复相加
	{
		value=value+1;
		return *this;
	}
	// 重载后置++运算符
	Myinteger operator++(int)  //这里的int为占位符，告诉编译器这个自增是后置自增
	{
		// 后置的特点: 先返回自身，然后自增
		Myinteger temp = *this;
		value=value+1;
		return temp;

	}

private:
	int value;
};

Myinteger::Myinteger(int a) {
	this->value = a;
}

//重载一下<<运算符，使其可以显示自定义的类
ostream& operator<<(ostream & out, const Myinteger& mi) 
{
	out << mi.value;
	return out;
}





void test_function() 
{
	Myinteger mint(10);
	cout << "前置自增" << mint++ << endl;
	cout << "后置自增" << ++mint << endl;

}


int main(int argc, char **argv)
{
	test_function();
	system("pause");
	return 0;
}