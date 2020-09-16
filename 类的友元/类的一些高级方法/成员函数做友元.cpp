#include<iostream>
using namespace std;
#include<string>
class Building;


//GoodGay中的部分成员函数可以访问Building的私有类，其他的不行
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
{   // 声明堆栈
	builder = new Building;
}

GoodGay::~GoodGay()
{
}

void GoodGay::vist_fr(){
	//作为友元可以访问私有，也可以访问共有
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