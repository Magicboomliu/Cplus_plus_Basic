#include<iostream>
using namespace std;

//����һ��person��
class Person
{
	// ������Ԫ��ȫ�ֺ������������������
	friend Person operator+(const Person&p1, const Person&p2);
	 friend  ostream& operator<<(ostream& cout, Person &p);

public:
	Person(int,int);
	//ʹ�ó�Ա�������ؼӷ������
	Person operator+(const Person&p) //p1+p2 �����ϵ��÷���Ϊ: p1.operator+(p2) 
	{
		Person temp(0,0);
		temp.age = this->age + p.age;
		temp.height = this->height + p.height;
		return temp;

	}

private:
	//����˽������
	int height;
	int age;

};
Person::Person(int a, int h)
{
	this->age = a;
	this->height = h;
};

//ʹ��ȫ�ֺ�����������+��������� ������Ϊ operator+(p1,p2)
Person operator+(const Person&p1, const Person&p2)
{
	Person temp(0,0);
	temp.age = p1.age + p2.age;
	temp.height = p1.height + p2.height;
	return temp;
	
}
// ʹ��ȫ�ֺ�������<<�����

ostream& operator<<(ostream& out, Person &p)
{
	// ���Person�������͵�����
	out << " Age: " << p.age << "  Height: " << p.height;
	return out;


}
void test_function()
{
	Person p1(18, 170);
	Person p2(20, 188);
	//ʹ�����صļӷ������
	Person p3 = p1 + p2;
	// ʹ�����ص�<<�����
	cout << p3 << endl;

}


// main����
int main(int argc, char**argv)
{
	test_function();
	system("pause");

	return 0;
}