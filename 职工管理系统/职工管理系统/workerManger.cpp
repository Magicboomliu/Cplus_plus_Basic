#include "workerManager.h"
#include<iostream>
#include<fstream>
using namespace std;

//构造函数
WorkerManager::WorkerManager()
{

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//如果文件不存在进行初始化操作
	if (!ifs.is_open()) {
		//初始化 员工为0人
		this->num_employee = 0;
		// 初始化指针为空指针
		this->m_emparry = NULL;
		this->FileisEmpty = true;
		ifs.close();
		cout << "注意文件不存在！需要从头创建文件" << endl;
	}
	//文件存在，但是文件为空，用户自己删除了
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "文件为空文件" << endl;
		//初始化 员工为0人
		this->num_employee = 0;
		// 初始化指针为空指针
		this->m_emparry = NULL;
		this->FileisEmpty = true;
		ifs.close();

	}
	

	//统计目前有的员工的个数
	  this->num_employee = this->get_employee_nums();
	  //初始化指针数组
	  this->m_emparry = new Woker*[this->num_employee];
	  init_op();

	  ////测试代码
	  //for (int i = 0;i < this->num_employee;i++) {

		 // cout << this->m_emparry[i]->workID << " " << this->m_emparry[i]->name << " "
			//  << this->m_emparry[i]->dept_ID << endl;
	  //}

	

}
//析构函数
WorkerManager::~WorkerManager()
{
	//if (this->m_emparry != NULL) {
	//	//清空
	//	for (int i = 0;i < this->num_employee;i++) {
	//		delete this->m_emparry[i];
	//		this->m_emparry = NULL;
	//	}
	//}

	//delete[] this->m_emparry;
	//this->m_emparry = NULL;
	//this->num_employee = 0;
	//this->FileisEmpty = true;

}
//显示菜单函数
void WorkerManager::show_menu()
{
	cout << "**********欢迎使用XXX员工管理系统**********" << endl;
	cout << "**************************************************" << endl;
	cout << "********** 0 退出该系统 **********" << endl;
	cout << "********** 1 增加员工的信息 **********" << endl;
	cout << "********** 2 显示员工的信息 **********" << endl;
	cout << "********** 3 删除离职的员工 **********" << endl;
	cout << "********** 4 修改员工的信息 **********" << endl;
	cout<< "**********  5 查找员工的信息 **********" << endl;
	cout << "********** 6 按照标号进行排序 **********" << endl;
	cout << "********** 7 清空所有信息**********" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
	

}
//退出系统的函数
void WorkerManager::exitsystm()
{
	cout << "欢迎您再次使用" << endl;
	system("pause");
	exit(0);}
//实现添加员工的函数
void WorkerManager::add_employee()
{
	// 首先让用户输入添加多少人
	cout << "请输入要添加的人数: " << endl;
	int add_num;
	cin >> add_num;
	//如果要添加的人数大于0
	if (add_num > 0) {
		// 计算需要新的指针数组的长度
		int array_size;
		array_size = this->num_employee + add_num;
		//重新分配一个新的空间数组
		Woker** newworker_array = new Woker*[array_size];
		//将之前的元素添加到数组中
		if (this->num_employee > 0) {
			for (int i = 0;i < this->num_employee;i++) {
				newworker_array[i] = this->m_emparry[i];
			}
		}

		//创立新的元素，将元素添加到数组中去
		for (int j = 0;j < add_num;j++) {

			int workerID;
			string workerName;
			int DeptID;
			//交互部分
			cout << "请输入第"<<j+1<<"职工的ID: \t ";
			cin >> workerID;
			cout << endl;
			cout << "请输入第" << j+1<< "职工的名字: \t ";
			cin >> workerName;
			cout << endl;
			cout << "请输入该员工的部门ID:" << endl;
			cout<<"( 1:代表普通员工 2：代表部门经理 3：代表老板）\t";
			cin >> DeptID;
			cout << endl;
			// 建立新的员工
			switch (DeptID)
			{
			case 1: //输入的是普通员工
				newworker_array[this->num_employee + j] = new Employee(workerID, workerName, DeptID);
				break;
			case 2: // 输入的是部门经理
				newworker_array[this->num_employee + j] = new Manager(workerID, workerName, DeptID);
				break;
			case 3: // 输入是老板
				newworker_array[this->num_employee + j] = new Boss(workerID, workerName, DeptID);
				break;
			default:
				break;
			}


		}

        //更新员工的数量
		this->num_employee = array_size;

		//更新定位数组指针
		delete[] this->m_emparry;
		this->m_emparry = NULL;
		this->m_emparry = newworker_array;
		cout << sizeof(m_emparry) / sizeof(m_emparry[0]);
		
		//更新文件的状态
		this->FileisEmpty = false;
		
		//写入到文件中去
		cout << "成功添加了" << add_num << "名员工！" << endl;
		this->save_to_file();
		
	
		
	}
	else
	{
		//您的输入有误
		cout << "您的输入有误" << endl;
		
	}


	system("pause");
	system("cls");

	


}
//实现保存到文件中的函数
void WorkerManager::save_to_file()
{
	//创建一个文件输入流
	ofstream ofs1;
	//声明要写入的格式
	ofs1.open(FILENAME, ios::out);
	for (int i = 0;i < this->num_employee;i++)
	{
		ofs1 << this->m_emparry[i]->workID << " " << this->m_emparry[i]->name << " "
			<< this->m_emparry[i]->dept_ID << endl;
	}
	//关闭文件
	ofs1.close();



}
//统计当前的文件中有多少行
int WorkerManager::get_employee_nums()
{
	ifstream ifs2;
	ifs2.open(FILENAME, ios::in);
	int lines = 0;
	int a;
	string b;
	int c;
	while (ifs2>>a&&ifs2>>b&&ifs2>>c)
	{      lines++;
	}
	//得到最后的行数，也是员工的个数
	cout << "目前有" << lines << "个员工在系统中" << endl;
	ifs2.close();
	return lines;
}
//初始化数据
void WorkerManager::init_op()
{
	ifstream ifs1;
	ifs1.open(FILENAME, ios::in);
	int wID;
	string wName;
	int dID;

	//统计当前的员工的数量
	int current_nums=0;

	// 读取文件的内容
	while (ifs1>>wID && ifs1 >> wName && ifs1>> dID)
	{
		//定义一个临时变量new_worker
		Woker* new_worker=NULL;
		//根据不同的数据类型创建不同的职工类型
		if (dID == 1) {
			new_worker = new Employee(wID, wName, dID);
		}
		else if (dID == 2) {

			new_worker = new Manager(wID, wName, dID);
		}
		else if (dID == 3)
		{
			new_worker = new Boss(wID, wName, dID);
		}
		// 赋值操作
		this->m_emparry[current_nums] = new_worker;
		current_nums++;
	}
	ifs1.close();

}
//显示职工的信息
void WorkerManager::show_employee_info() {
	if (this->FileisEmpty == true) { cout << "空文件无法进行此操作" << endl;
	return;
	}
	for (int i = 0;i < this->num_employee;i++) {

	this->m_emparry[i]->show_info();
	
	}
	system("pause");
	system("cls");


}
//判断职工是否存在
int WorkerManager::isExist(int id) {
	//默认其不存在,-1代表不存在
	int ret = -1;
	//遍历是否存在
	for (int i = 0;i < this->num_employee;i++) {
		if (this->m_emparry[i]->workID == id) {
			
			ret = i;
			break;
		}
	}
	return ret;

}
// 删除职工操作
void WorkerManager::Delete() {
	//空文件直接改
	if (this->FileisEmpty == true) {
		cout << "空文件无法进行此操作" << endl;
		return;
	}

	cout << "请您输入要删除的职工的工号：" << endl;
	int id;
	cin >> id;
	//首先判断职工是否存在
	int ret = this->isExist(id);
	if (ret == -1) { cout << "该员工不存在，你删除个锤子" << endl; }
	else
	{
		for (int i = ret;i < this->num_employee - 1;i++)
		{
			this->m_emparry[i] = this->m_emparry[i + 1];

		}
		this->num_employee = this->num_employee - 1;
		this->save_to_file();
		cout << "删除成功" << endl;
	}


}
// 修改员工的操作
void WorkerManager::Modify_employee()
{
	if (this->FileisEmpty == true) {
		cout << "空文件无法进行此操作" << endl;
		return;
	}
	//确定要修改的职工的信息
	cout << "请输入要修改的职工的工号" << endl;
	int id;
	cin >> id;
	//查找无没有这个人
	int ret = this->isExist(id);
	if (ret == -1) { cout << "查无此人" << endl;
	return;
	}
	// 输入要修改的信息
	else {
		cout << "查到了这个人" << endl;
		this->m_emparry[ret]->show_info();
		cout << "下面开始进行修改：" << endl;
		int wID; string wName;int DeptID;
		
		cout << "请输入要修改的工号: ";
		cin >> wID;
		cout << endl;
	    
		cout << "请输入要修改的名字:";
		cin >> wName;
		cout << endl;

		cout << "请输入要修改的部门编号" << endl;
		cout << "1 代表普通员工" << endl;
		cout << "2 代表经历" << endl;
		cout << "3 代表老板" << endl;
		cin >> DeptID;
		Woker * worker = NULL;
		
		switch (DeptID)
		{
		case 1:
			worker = new Employee(wID, wName, DeptID);
			break;
		case 2:
			worker = new Manager(wID, wName, DeptID);
			break;
		case 3:
			worker = new Boss(wID, wName, DeptID);
			break;
		default:
			break;
		}
		//对其进行覆盖
		this->m_emparry[ret] = worker;
		// 保存到文件
		this->save_to_file();
		
	}
	
}
//查找员工的操作
void WorkerManager::search_employee() {
	if (this->FileisEmpty == true) {
		cout << "空文件无法进行此操作" << endl;
		return;
	}
	cout << "请输入您想要查找的方式：" << endl;
	cout << "1. 按照职工的工号进行查找" << endl;
	cout << "2.按照职工的名字进行查找" << endl;
	int select;
	cin >> select;
	//如果按照工号进行查找
	if (select == 1) {
		int id;
		int ret;
		cout << "请输入要查找的员工的编号：";
		cin >> id;
		cout << endl;
		ret =this->isExist(id);
		if (ret!=-1) { this->m_emparry[ret]->show_info(); }
		else {
			cout << "查无此人" << endl;
		}
	}
	//如果按照职工的名字进行查找
	else if (select == 2) {
		string n;
		cout << "请输入要查找的职工的名字：";
		cin >> n;
		int flag = 0;
		int nums = 0;
		int result[10];
		//判断N是否在系统中

		for (int i = 0;i < this->num_employee;i++) {
			if (this->m_emparry[i]->name == n) {
				
				result[nums] = i;
				nums++;
				flag = 1;
			}
		}
		if (flag = 0) { cout << "查无此人" << endl; }
		else { cout << "存在这名员工:" << endl; 
		for (int j = 0;j < nums;j++)
		{
			this->m_emparry[result[j]]->show_info();
		}
		
		}
		
	}

}
//对员工进行排序（按照工号）
void WorkerManager::sortedByWorkid(bool reverse1 = false)
{
	if (this->FileisEmpty == true) {
		cout << "空文件无法进行此操作" << endl;
		return;
	}
	//默认为升序排序
	if (reverse1 == false) {
		// 这里使用选择排序
		for (int i = 0;i < this->num_employee-1;i++) {

			for (int j = this->num_employee - 1;j >=i+1 ; j--) {
				if (this->m_emparry[j]->workID < this->m_emparry[j - 1]->workID) {
					int temp = m_emparry[j]->workID;
					m_emparry[j]->workID = this->m_emparry[j - 1]->workID;
					this->m_emparry[j - 1]->workID = temp;}
			}
	}
	}

	//降序排序

	else {

		// 这里使用选择排序
		for (int i = 0;i < this->num_employee - 1;i++) {

			for (int j = this->num_employee - 1;j >= i + 1; j--) {
				if (this->m_emparry[j]->workID > this->m_emparry[j - 1]->workID) {
					int temp = m_emparry[j]->workID;
					m_emparry[j]->workID = this->m_emparry[j - 1]->workID;
					this->m_emparry[j - 1]->workID = temp;
				}
			}
		}



	}
	// 输出排序后的结果
	this->show_employee_info();
	//保存到文件
	this->save_to_file();
}
//清空操作
void WorkerManager::clear()
{
	if (this->FileisEmpty == true) {
		cout << "空文件无法进行此操作" << endl;
		return;
	}
	cout << "确定要清空整个系统吗？ （y/n)" << endl;
	char s;
	cin >> s;
	if (s == 'n') { return; }
	else if(s=='y')
	{
	

		if (this->m_emparry != NULL) {
			//清空
			for (int i = 0;i < this->num_employee;i++) {
				delete this->m_emparry[i];
				this->m_emparry = NULL;
			}}

		delete[] this->m_emparry;
		this->m_emparry = NULL;
		this->num_employee = 0;
		this->FileisEmpty = true;

		ofstream ofs1;
		ofs1.open(FILENAME, ios::trunc);//删除文件后重新创建
		ofs1.close();
	
	}



}

