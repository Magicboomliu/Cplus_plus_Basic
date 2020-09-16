#include<iostream>
using namespace std;
// 为什么要进行赋值运算符的重载？
// 因为系统在执行赋值运算时候，默认使用是浅层复制，我们重载的目的就是将其改成深层复制

class Person
{
	friend ostream& operator<<(ostream& out, const Person &p1);
public:
	Person(int age) {
		//使用堆区构造一个新的age
		Age = new int(age);
	
	};
	~Person()
	{
		//因为使用的是堆区构建，因此需要释放内存
		if (Age != NULL) {

			delete Age;
			Age = NULL;
		}
	}
	//重载赋值运算符
	Person& operator=(Person &p)
	{
		// 首先清空自己的Age指针
		if (this->Age != NULL) {
			delete Age; Age = NULL;}
		//建立一个新的堆区
		this->Age = new int(*p.Age);

		return *this;
	}

private:
	int *Age;
};
// 重载<<运算符
ostream& operator<<(ostream& out,const Person &p1) //全局只有一个ostream
{
	out << *p1.Age;
	return out;

};

void test_function() {

	Person p1(10);
	Person p2(20);
	//重载等号
	p1 = p2;
	// 输出p1
	cout << p1 << endl;
}


//int main(int argc, char**argv)
//{
//
//
//	return 0;
//}