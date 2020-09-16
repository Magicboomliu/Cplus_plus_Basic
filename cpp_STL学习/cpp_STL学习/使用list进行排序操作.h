#pragma once
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

class Person {

public:
	Person(int age, int height, string name)
	{
		this->Age = age;
		this->Height = height;
		this->Name = name;
	};	
	int Age;
	int Height;
	string Name;
};

//��ӡ����
void shows(list<Person>personlist) {
	for (list<Person>::iterator it = personlist.begin();it != personlist.end();it++)
	{
		cout << (*it).Name << " " << (*it).Age << " " << (*it).Height << endl;
	}
}

//��ӡ�Ĺ���
bool compare(Person &p1, Person &p2) {


	if (p1.Age == p2.Age) {

		return p1.Height> p2.Height;
	}
	else
	{
		return p1.Age > p2.Age;
	}
}

void test06()
{
	//����һ��list
	list<Person> personlist;

	Person p1(22, 180, "feng");
	Person p2(23, 178, "Fu");
	Person p3(22, 173, "lai");
	Person p4(24, 173, "Liu");
	
	personlist.push_back(p1);
	personlist.push_back(p2);
	personlist.push_back(p3);
	personlist.push_back(p4);

	//����ǰ
	shows(personlist);
	cout << ">>>>>>>>>>>>>>>>>" << endl;
	//�����
	personlist.sort(compare);
	shows(personlist);

}