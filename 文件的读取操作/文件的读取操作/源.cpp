#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define FILENAME "employee_info.txt"
int main(int argc, char **agrv)
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int a;
	string b;
	int c;
	while (ifs >> a && ifs >>  b && ifs >>  c) {
		cout << a << endl;;
		cout << b << endl;;
		cout << c << endl;}
	
	system("pause");
	ifs.close();
	return 0;
}