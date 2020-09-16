#include "workerManager.h"
#include<iostream>
#include<fstream>
using namespace std;

//���캯��
WorkerManager::WorkerManager()
{

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//����ļ������ڽ��г�ʼ������
	if (!ifs.is_open()) {
		//��ʼ�� Ա��Ϊ0��
		this->num_employee = 0;
		// ��ʼ��ָ��Ϊ��ָ��
		this->m_emparry = NULL;
		this->FileisEmpty = true;
		ifs.close();
		cout << "ע���ļ������ڣ���Ҫ��ͷ�����ļ�" << endl;
	}
	//�ļ����ڣ������ļ�Ϊ�գ��û��Լ�ɾ����
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "�ļ�Ϊ���ļ�" << endl;
		//��ʼ�� Ա��Ϊ0��
		this->num_employee = 0;
		// ��ʼ��ָ��Ϊ��ָ��
		this->m_emparry = NULL;
		this->FileisEmpty = true;
		ifs.close();

	}
	

	//ͳ��Ŀǰ�е�Ա���ĸ���
	  this->num_employee = this->get_employee_nums();
	  //��ʼ��ָ������
	  this->m_emparry = new Woker*[this->num_employee];
	  init_op();

	  ////���Դ���
	  //for (int i = 0;i < this->num_employee;i++) {

		 // cout << this->m_emparry[i]->workID << " " << this->m_emparry[i]->name << " "
			//  << this->m_emparry[i]->dept_ID << endl;
	  //}

	

}
//��������
WorkerManager::~WorkerManager()
{
	//if (this->m_emparry != NULL) {
	//	//���
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
//��ʾ�˵�����
void WorkerManager::show_menu()
{
	cout << "**********��ӭʹ��XXXԱ������ϵͳ**********" << endl;
	cout << "**************************************************" << endl;
	cout << "********** 0 �˳���ϵͳ **********" << endl;
	cout << "********** 1 ����Ա������Ϣ **********" << endl;
	cout << "********** 2 ��ʾԱ������Ϣ **********" << endl;
	cout << "********** 3 ɾ����ְ��Ա�� **********" << endl;
	cout << "********** 4 �޸�Ա������Ϣ **********" << endl;
	cout<< "**********  5 ����Ա������Ϣ **********" << endl;
	cout << "********** 6 ���ձ�Ž������� **********" << endl;
	cout << "********** 7 ���������Ϣ**********" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
	

}
//�˳�ϵͳ�ĺ���
void WorkerManager::exitsystm()
{
	cout << "��ӭ���ٴ�ʹ��" << endl;
	system("pause");
	exit(0);}
//ʵ�����Ա���ĺ���
void WorkerManager::add_employee()
{
	// �������û�������Ӷ�����
	cout << "������Ҫ��ӵ�����: " << endl;
	int add_num;
	cin >> add_num;
	//���Ҫ��ӵ���������0
	if (add_num > 0) {
		// ������Ҫ�µ�ָ������ĳ���
		int array_size;
		array_size = this->num_employee + add_num;
		//���·���һ���µĿռ�����
		Woker** newworker_array = new Woker*[array_size];
		//��֮ǰ��Ԫ����ӵ�������
		if (this->num_employee > 0) {
			for (int i = 0;i < this->num_employee;i++) {
				newworker_array[i] = this->m_emparry[i];
			}
		}

		//�����µ�Ԫ�أ���Ԫ����ӵ�������ȥ
		for (int j = 0;j < add_num;j++) {

			int workerID;
			string workerName;
			int DeptID;
			//��������
			cout << "�������"<<j+1<<"ְ����ID: \t ";
			cin >> workerID;
			cout << endl;
			cout << "�������" << j+1<< "ְ��������: \t ";
			cin >> workerName;
			cout << endl;
			cout << "�������Ա���Ĳ���ID:" << endl;
			cout<<"( 1:������ͨԱ�� 2�������ž��� 3�������ϰ壩\t";
			cin >> DeptID;
			cout << endl;
			// �����µ�Ա��
			switch (DeptID)
			{
			case 1: //���������ͨԱ��
				newworker_array[this->num_employee + j] = new Employee(workerID, workerName, DeptID);
				break;
			case 2: // ������ǲ��ž���
				newworker_array[this->num_employee + j] = new Manager(workerID, workerName, DeptID);
				break;
			case 3: // �������ϰ�
				newworker_array[this->num_employee + j] = new Boss(workerID, workerName, DeptID);
				break;
			default:
				break;
			}


		}

        //����Ա��������
		this->num_employee = array_size;

		//���¶�λ����ָ��
		delete[] this->m_emparry;
		this->m_emparry = NULL;
		this->m_emparry = newworker_array;
		cout << sizeof(m_emparry) / sizeof(m_emparry[0]);
		
		//�����ļ���״̬
		this->FileisEmpty = false;
		
		//д�뵽�ļ���ȥ
		cout << "�ɹ������" << add_num << "��Ա����" << endl;
		this->save_to_file();
		
	
		
	}
	else
	{
		//������������
		cout << "������������" << endl;
		
	}


	system("pause");
	system("cls");

	


}
//ʵ�ֱ��浽�ļ��еĺ���
void WorkerManager::save_to_file()
{
	//����һ���ļ�������
	ofstream ofs1;
	//����Ҫд��ĸ�ʽ
	ofs1.open(FILENAME, ios::out);
	for (int i = 0;i < this->num_employee;i++)
	{
		ofs1 << this->m_emparry[i]->workID << " " << this->m_emparry[i]->name << " "
			<< this->m_emparry[i]->dept_ID << endl;
	}
	//�ر��ļ�
	ofs1.close();



}
//ͳ�Ƶ�ǰ���ļ����ж�����
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
	//�õ�����������Ҳ��Ա���ĸ���
	cout << "Ŀǰ��" << lines << "��Ա����ϵͳ��" << endl;
	ifs2.close();
	return lines;
}
//��ʼ������
void WorkerManager::init_op()
{
	ifstream ifs1;
	ifs1.open(FILENAME, ios::in);
	int wID;
	string wName;
	int dID;

	//ͳ�Ƶ�ǰ��Ա��������
	int current_nums=0;

	// ��ȡ�ļ�������
	while (ifs1>>wID && ifs1 >> wName && ifs1>> dID)
	{
		//����һ����ʱ����new_worker
		Woker* new_worker=NULL;
		//���ݲ�ͬ���������ʹ�����ͬ��ְ������
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
		// ��ֵ����
		this->m_emparry[current_nums] = new_worker;
		current_nums++;
	}
	ifs1.close();

}
//��ʾְ������Ϣ
void WorkerManager::show_employee_info() {
	if (this->FileisEmpty == true) { cout << "���ļ��޷����д˲���" << endl;
	return;
	}
	for (int i = 0;i < this->num_employee;i++) {

	this->m_emparry[i]->show_info();
	
	}
	system("pause");
	system("cls");


}
//�ж�ְ���Ƿ����
int WorkerManager::isExist(int id) {
	//Ĭ���䲻����,-1��������
	int ret = -1;
	//�����Ƿ����
	for (int i = 0;i < this->num_employee;i++) {
		if (this->m_emparry[i]->workID == id) {
			
			ret = i;
			break;
		}
	}
	return ret;

}
// ɾ��ְ������
void WorkerManager::Delete() {
	//���ļ�ֱ�Ӹ�
	if (this->FileisEmpty == true) {
		cout << "���ļ��޷����д˲���" << endl;
		return;
	}

	cout << "��������Ҫɾ����ְ���Ĺ��ţ�" << endl;
	int id;
	cin >> id;
	//�����ж�ְ���Ƿ����
	int ret = this->isExist(id);
	if (ret == -1) { cout << "��Ա�������ڣ���ɾ��������" << endl; }
	else
	{
		for (int i = ret;i < this->num_employee - 1;i++)
		{
			this->m_emparry[i] = this->m_emparry[i + 1];

		}
		this->num_employee = this->num_employee - 1;
		this->save_to_file();
		cout << "ɾ���ɹ�" << endl;
	}


}
// �޸�Ա���Ĳ���
void WorkerManager::Modify_employee()
{
	if (this->FileisEmpty == true) {
		cout << "���ļ��޷����д˲���" << endl;
		return;
	}
	//ȷ��Ҫ�޸ĵ�ְ������Ϣ
	cout << "������Ҫ�޸ĵ�ְ���Ĺ���" << endl;
	int id;
	cin >> id;
	//������û�������
	int ret = this->isExist(id);
	if (ret == -1) { cout << "���޴���" << endl;
	return;
	}
	// ����Ҫ�޸ĵ���Ϣ
	else {
		cout << "�鵽�������" << endl;
		this->m_emparry[ret]->show_info();
		cout << "���濪ʼ�����޸ģ�" << endl;
		int wID; string wName;int DeptID;
		
		cout << "������Ҫ�޸ĵĹ���: ";
		cin >> wID;
		cout << endl;
	    
		cout << "������Ҫ�޸ĵ�����:";
		cin >> wName;
		cout << endl;

		cout << "������Ҫ�޸ĵĲ��ű��" << endl;
		cout << "1 ������ͨԱ��" << endl;
		cout << "2 ������" << endl;
		cout << "3 �����ϰ�" << endl;
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
		//������и���
		this->m_emparry[ret] = worker;
		// ���浽�ļ�
		this->save_to_file();
		
	}
	
}
//����Ա���Ĳ���
void WorkerManager::search_employee() {
	if (this->FileisEmpty == true) {
		cout << "���ļ��޷����д˲���" << endl;
		return;
	}
	cout << "����������Ҫ���ҵķ�ʽ��" << endl;
	cout << "1. ����ְ���Ĺ��Ž��в���" << endl;
	cout << "2.����ְ�������ֽ��в���" << endl;
	int select;
	cin >> select;
	//������չ��Ž��в���
	if (select == 1) {
		int id;
		int ret;
		cout << "������Ҫ���ҵ�Ա���ı�ţ�";
		cin >> id;
		cout << endl;
		ret =this->isExist(id);
		if (ret!=-1) { this->m_emparry[ret]->show_info(); }
		else {
			cout << "���޴���" << endl;
		}
	}
	//�������ְ�������ֽ��в���
	else if (select == 2) {
		string n;
		cout << "������Ҫ���ҵ�ְ�������֣�";
		cin >> n;
		int flag = 0;
		int nums = 0;
		int result[10];
		//�ж�N�Ƿ���ϵͳ��

		for (int i = 0;i < this->num_employee;i++) {
			if (this->m_emparry[i]->name == n) {
				
				result[nums] = i;
				nums++;
				flag = 1;
			}
		}
		if (flag = 0) { cout << "���޴���" << endl; }
		else { cout << "��������Ա��:" << endl; 
		for (int j = 0;j < nums;j++)
		{
			this->m_emparry[result[j]]->show_info();
		}
		
		}
		
	}

}
//��Ա���������򣨰��չ��ţ�
void WorkerManager::sortedByWorkid(bool reverse1 = false)
{
	if (this->FileisEmpty == true) {
		cout << "���ļ��޷����д˲���" << endl;
		return;
	}
	//Ĭ��Ϊ��������
	if (reverse1 == false) {
		// ����ʹ��ѡ������
		for (int i = 0;i < this->num_employee-1;i++) {

			for (int j = this->num_employee - 1;j >=i+1 ; j--) {
				if (this->m_emparry[j]->workID < this->m_emparry[j - 1]->workID) {
					int temp = m_emparry[j]->workID;
					m_emparry[j]->workID = this->m_emparry[j - 1]->workID;
					this->m_emparry[j - 1]->workID = temp;}
			}
	}
	}

	//��������

	else {

		// ����ʹ��ѡ������
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
	// ��������Ľ��
	this->show_employee_info();
	//���浽�ļ�
	this->save_to_file();
}
//��ղ���
void WorkerManager::clear()
{
	if (this->FileisEmpty == true) {
		cout << "���ļ��޷����д˲���" << endl;
		return;
	}
	cout << "ȷ��Ҫ�������ϵͳ�� ��y/n)" << endl;
	char s;
	cin >> s;
	if (s == 'n') { return; }
	else if(s=='y')
	{
	

		if (this->m_emparry != NULL) {
			//���
			for (int i = 0;i < this->num_employee;i++) {
				delete this->m_emparry[i];
				this->m_emparry = NULL;
			}}

		delete[] this->m_emparry;
		this->m_emparry = NULL;
		this->num_employee = 0;
		this->FileisEmpty = true;

		ofstream ofs1;
		ofs1.open(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs1.close();
	
	}



}

