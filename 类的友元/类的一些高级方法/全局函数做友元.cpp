// ���ڵ�һЩ˽�е����� ���������һЩ����ĺ�������������з��ʣ���Ҫ�õ���Ԫ friend
//(1) ȫ�ֺ�������Ԫ

#include<iostream>
using namespace std;
#include<string>
class Building

{
	//����������ȫ�ֵĺ������� 
	friend void goodGay(Building *build);
	
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


//ȫ�ֺ���
void goodGay(Building *build) {

	cout << "goodGay is is visiting the build" << endl;
	// ���ʹ���
	cout << build->m_livingroom << endl;
	// ����˽�У�ǰ�᱾����Ϊ�����Ԫ
	cout << build->bedroom << endl;
}  

int main(int argc, char** argv)
{
	Building build;
	goodGay(&build);
	system("pause");

	return 0;
}