#include<iostream>
using namespace std;
#include<string>

class Building

{
	//����Building �����Ԫ��
	friend class GoodGay;


public:
	string m_livingroom;
	Building();
	~Building();

private:
	string bedroom;
};

Building::Building()
{
	this->bedroom = "bedroom";
	m_livingroom = "living romm";
}

Building::~Building()
{
}

// ����Building �����Ԫ��
class GoodGay
{
public:
	GoodGay();
	~GoodGay();
	void vist();

private:
	Building * mybuild;

};

GoodGay::GoodGay()
{
	mybuild = new Building;
}

GoodGay::~GoodGay()
{
}

void GoodGay::vist() {
	cout << "��Ԫ��ĳ�Ա�������ڷ���Building��Ķ���" << endl;
	//���ʹ��ж���
	cout << mybuild->m_livingroom << endl;
	// ����˽�ж���
	cout << mybuild->bedroom << endl;
}
int main(int argc, char** argv)
{
	
	GoodGay gg;
	gg.vist();
	
	system("pause");

	return 0;
}