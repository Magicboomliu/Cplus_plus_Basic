#include<iostream>
using namespace std;

class Person {
public:
	Person(int a)
	{
		// ����
		Age = a;
	};
	//������������
	bool operator==(const Person &p) {
		//�ж��Ƿ����
		if (this->Age == p.Age) {
			return true;
		}
		else { return false; }}
	// ���ز���������
	bool operator!=(const Person& p) {
		if (this->Age!=p.Age)
		{	return true;}
		else
		{return false;}}
	//���ش��ں������
	bool operator>(const Person&p) {
		if (this->Age > p.Age) { return true; }
		else
		{
			return false;
		}
	}
	// ����С�������
	bool operator<(const Person&p) {
		if (this->Age < p.Age) { return true; }
		else
		{
			return false;
		}
	}

private:
	int Age;

};

//int main(int agrc, char** argv)
//{
//
//	system("pause");
//	return 0;
//}