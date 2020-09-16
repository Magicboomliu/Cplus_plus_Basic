#include<iostream>
using namespace std;
#include<string>

class Building

{
	//声明Building 类的友元类
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

// 构造Building 类的友元类
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
	cout << "友元类的成员函数正在访问Building类的对象" << endl;
	//访问共有对象
	cout << mybuild->m_livingroom << endl;
	// 访问私有对象
	cout << mybuild->bedroom << endl;
}
int main(int argc, char** argv)
{
	
	GoodGay gg;
	gg.vist();
	
	system("pause");

	return 0;
}