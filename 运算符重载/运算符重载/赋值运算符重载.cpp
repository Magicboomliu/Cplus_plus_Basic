#include<iostream>
using namespace std;
// ΪʲôҪ���и�ֵ����������أ�
// ��Ϊϵͳ��ִ�и�ֵ����ʱ��Ĭ��ʹ����ǳ�㸴�ƣ��������ص�Ŀ�ľ��ǽ���ĳ���㸴��

class Person
{
	friend ostream& operator<<(ostream& out, const Person &p1);
public:
	Person(int age) {
		//ʹ�ö�������һ���µ�age
		Age = new int(age);
	
	};
	~Person()
	{
		//��Ϊʹ�õ��Ƕ��������������Ҫ�ͷ��ڴ�
		if (Age != NULL) {

			delete Age;
			Age = NULL;
		}
	}
	//���ظ�ֵ�����
	Person& operator=(Person &p)
	{
		// ��������Լ���Ageָ��
		if (this->Age != NULL) {
			delete Age; Age = NULL;}
		//����һ���µĶ���
		this->Age = new int(*p.Age);

		return *this;
	}

private:
	int *Age;
};
// ����<<�����
ostream& operator<<(ostream& out,const Person &p1) //ȫ��ֻ��һ��ostream
{
	out << *p1.Age;
	return out;

};

void test_function() {

	Person p1(10);
	Person p2(20);
	//���صȺ�
	p1 = p2;
	// ���p1
	cout << p1 << endl;
}


//int main(int argc, char**argv)
//{
//
//
//	return 0;
//}