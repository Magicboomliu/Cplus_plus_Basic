#include<iostream>
using namespace std;

//�����Լ���������
class Myinteger {
	friend ostream& operator<<(ostream & out, const Myinteger& mi);
public:
	Myinteger(int);

	//����ǰ��++�����
	Myinteger& operator++() // �������õ��������ڱ�֤myint�������
	{
		value=value+1;
		return *this;
	}
	// ���غ���++�����
	Myinteger operator++(int)  //�����intΪռλ�������߱�������������Ǻ�������
	{
		// ���õ��ص�: �ȷ�������Ȼ������
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

//����һ��<<�������ʹ�������ʾ�Զ������
ostream& operator<<(ostream & out, const Myinteger& mi) 
{
	out << mi.value;
	return out;
}





void test_function() 
{
	Myinteger mint(10);
	cout << "ǰ������" << mint++ << endl;
	cout << "��������" << ++mint << endl;

}


int main(int argc, char **argv)
{
	test_function();
	system("pause");
	return 0;
}