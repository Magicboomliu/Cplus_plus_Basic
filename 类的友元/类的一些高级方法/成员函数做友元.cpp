#include<iostream>
using namespace std;
#include<string>
class Building;


//GoodGay�еĲ��ֳ�Ա�������Է���Building��˽���࣬�����Ĳ���
class GoodGay
{
public:
	GoodGay();
	~GoodGay();
	void vist_fr();
	void vist_no();
	Building * builder;
	

private:
	
};

class Building

{
	friend void GoodGay::vist_fr();


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



GoodGay::GoodGay()
{   // ������ջ
	builder = new Building;
}

GoodGay::~GoodGay()
{
}

void GoodGay::vist_fr(){
	//��Ϊ��Ԫ���Է���˽�У�Ҳ���Է��ʹ���
	builder->m_livingroom;
	builder->bedroom;

}
void GoodGay::vist_no() {
	builder->m_livingroom;
}

int main(int argc, char** argv)
{
	GoodGay gg;
	
	

	system("pause");

	return 0;
}