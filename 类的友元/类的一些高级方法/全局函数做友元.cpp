// 类内的一些私有的属性 想让类外的一些特殊的函数或者是类进行访问，需要用到友元 friend
//(1) 全局函数做友元

#include<iostream>
using namespace std;
#include<string>
class Building

{
	//在类内生命全局的函数友人 
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


//全局函数
void goodGay(Building *build) {

	cout << "goodGay is is visiting the build" << endl;
	// 访问共有
	cout << build->m_livingroom << endl;
	// 访问私有，前提本函数为类的友元
	cout << build->bedroom << endl;
}  

int main(int argc, char** argv)
{
	Building build;
	goodGay(&build);
	system("pause");

	return 0;
}