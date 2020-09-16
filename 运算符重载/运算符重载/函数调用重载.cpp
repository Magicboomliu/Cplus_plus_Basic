#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person(int,string);
	//ÖØÔØº¯ÊıÔËËã·û
	void operator()()
	{
		cout << "Print Hello" << this->name << " The Age is:" << this->Age << endl;
	}
private:
	int Age;
	string name;



};
Person::Person(int age, string myname) {

	this->Age = age;
	this->name = myname;
}



int main(int argc, char**argv) {
	Person p1(18,"Liu Zihua");
	p1();

	system("pause");
	return 0;
}